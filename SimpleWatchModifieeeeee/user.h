#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif



#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_USER
#define LV_ATTRIBUTE_IMG_USER
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_USER uint8_t user_map[] = {
  0x00, 0x01, 0xf0, 0x00, 0x00, 
  0x00, 0x07, 0xfc, 0x00, 0x00, 
  0x00, 0x0f, 0xfe, 0x00, 0x00, 
  0x00, 0x1f, 0x1f, 0x00, 0x00, 
  0x00, 0x1c, 0x07, 0x80, 0x00, 
  0x00, 0x38, 0x03, 0x80, 0x00, 
  0x00, 0x38, 0x03, 0x80, 0x00, 
  0x00, 0x38, 0x03, 0x80, 0x00, 
  0x00, 0x38, 0x03, 0x80, 0x00, 
  0x00, 0x38, 0x03, 0x80, 0x00, 
  0x00, 0x3c, 0x03, 0x80, 0x00, 
  0x00, 0x1c, 0x07, 0x80, 0x00, 
  0x00, 0x1f, 0x1f, 0x00, 0x00, 
  0x00, 0x0f, 0xfe, 0x00, 0x00, 
  0x00, 0x07, 0xfc, 0x00, 0x00, 
  0x00, 0x00, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x07, 0xfc, 0x00, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x00, 
  0x00, 0xff, 0xff, 0xe0, 0x00, 
  0x01, 0xfc, 0x07, 0xf0, 0x00, 
  0x03, 0xe0, 0x00, 0xfc, 0x00, 
  0x07, 0x80, 0x00, 0x3c, 0x00, 
  0x0f, 0x00, 0x00, 0x1e, 0x00, 
  0x1e, 0x00, 0x00, 0x0f, 0x00, 
  0x3c, 0x00, 0x00, 0x07, 0x80, 
  0x38, 0x00, 0x00, 0x03, 0x80, 
  0x78, 0x00, 0x00, 0x03, 0xc0, 
  0x70, 0x00, 0x00, 0x01, 0xc0, 
  0x70, 0x00, 0x00, 0x01, 0xc0, 
  0xf0, 0x00, 0x00, 0x01, 0xe0, 
  0xe0, 0x00, 0x00, 0x00, 0xe0, 
  0xe0, 0x00, 0x00, 0x00, 0xe0, 
  0xff, 0xff, 0xff, 0xff, 0xe0, 
  0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x7f, 0xff, 0xff, 0xff, 0xc0, 
};

const lv_img_dsc_t user = {
  {LV_IMG_CF_ALPHA_1BIT,
  0,
  0,
  35,
  38},
  190,
  user_map,
};
