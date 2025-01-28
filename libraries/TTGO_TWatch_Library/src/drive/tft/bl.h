#ifndef __BL_H
#define __BL_H

#include <Arduino.h>
#include <driver/ledc.h>
#include <Ticker.h>
#include "esp32-hal-ledc.h" 


class PWMBase {
public:
    PWMBase(uint8_t pin, uint8_t channel)
        : _pin(pin), _channel(channel) {}

    virtual ~PWMBase() {
        ledcDetachPin(_pin);  // Use ledcDetachPin instead of ledcDetach
    }

    virtual void begin() {
        ledcSetup(_channel, 1000, 8);        // Set PWM channel with frequency and resolution
        ledcAttachPin(_pin, _channel);      // Use ledcAttachPin instead of ledcAttach
        ledcWrite(_channel, 0);             // Initialize with 0 brightness
    }

    virtual void adjust(uint8_t level) {
        ledcWrite(_channel, level);         // Adjust brightness
    }

protected:
    uint8_t _pin;
    uint8_t _channel;
};

class BackLight : public PWMBase {
public:
    BackLight(uint8_t pin, uint8_t channel = 0)
        : PWMBase(pin, channel), _on(false), _level(255) {}

    uint8_t getLevel() {
        return _level;
    }

    void adjust(uint8_t level) {
        _level = level;
        PWMBase::adjust(level);
        _on = true;
    }

    bool isOn() {
        return _on;
    }

    void on() {
        _on = true;
        ledcWrite(_channel, _level);
    }

    void off() {
        _on = false;
        ledcWrite(_channel, 0);
    }

    bool reverse() {
        _on ? off() : on();
        return _on;
    }

private:
    bool _on;
    uint8_t _level;
};

class PWMToneBase : public PWMBase {
public:
    PWMToneBase(uint8_t pin, uint8_t channel, int freq)
        : PWMBase(pin, channel), _freq(freq), _tick(nullptr) {}

    virtual ~PWMToneBase() {
        if (_tick != nullptr) {
            delete _tick;
        }
    }

    virtual void begin() {
        PWMBase::begin();
        _tick = new Ticker;
    }

    virtual void onec(int duration = 200) {
        ledcWriteTone(_channel, _freq);  // Start tone
        _tick->once_ms<uint8_t>(duration, [](uint8_t channel) {
            ledcWriteTone(channel, 0);  // Stop tone after duration
        }, _channel);
    }

protected:
    double _freq;
    Ticker* _tick;
};

class Motor : public PWMToneBase {
public:
    Motor(uint8_t pin, uint8_t channel = 4, int freq = 1000)
        : PWMToneBase(pin, channel, freq) {}
};

class Buzzer : public PWMToneBase {
public:
    Buzzer(uint8_t pin, uint8_t channel = 2, int freq = 1000)
        : PWMToneBase(pin, channel, freq) {}
};

#endif
