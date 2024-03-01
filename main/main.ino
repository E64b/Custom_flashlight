#include "main.h"

Data data;

CRGB LEFT[NUM_LEDS];
CRGB RIGHT[NUM_LEDS];

void setup() {
  FastLED.addLeds<LED_TYPE, LEFT_PIN, COLOR_ORDER>(LEFT, NUM_LEDS)
      .setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE, RIGHT_PIN, COLOR_ORDER>(RIGHT, NUM_LEDS)
      .setCorrection(TypicalLEDStrip);

  FastLED.setMaxPowerInVoltsAndMilliamps(MAX_V, MAX_POWER);

  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  Graphics();
}