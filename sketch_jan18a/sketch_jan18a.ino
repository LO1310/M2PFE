#include <TFT_eSPI.h> // Bibliothèque pour contrôler l'écran
#include <TTGO.h>     // Bibliothèque pour la montre TTGO

TTGOClass *ttgo;
TFT_eSPI tft; // Création d'un objet TFT_eSPI

void setup() {
  // Initialisation de la montre
  ttgo = TTGOClass::getWatch();
  ttgo->begin();

  // Initialisation de l'écran
  tft.init();
  tft.fillScreen(TFT_BLACK);

  // Couleurs des cercles et du texte
  uint16_t circleColor = TFT_BLUE;
  uint16_t iconColor = TFT_WHITE;

  // Coordonnées des cercles
  int xCoords[3] = {50, 120, 190}; // Positions X des colonnes
  int yCoords[3] = {50, 120, 190}; // Positions Y des lignes
  int radius = 30;                 // Rayon des cercles

  // Dessiner les cercles et ajouter des icônes
  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      int x = xCoords[col];
      int y = yCoords[row];

      // Dessiner un cercle
      tft.drawCircle(x, y, radius, circleColor);

      // Dessiner une icône ou texte temporaire (exemple : numéros)
      tft.setTextColor(iconColor, TFT_BLACK);
      tft.setTextSize(2);
      tft.setCursor(x - 5, y - 8); // Centrer légèrement le texte
      tft.print(row * 3 + col + 1); // Exemple : numéros 1 à 9
    }
  }
}

void loop() {
  // Boucle vide pour ce test
}
