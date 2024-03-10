#include "main.h"

Data data;

CRGB LEFT[NUM_LEDS];
CRGB RIGHT[NUM_LEDS];

void setup() {
  FastLED.addLeds<LED_TYPE, LEFT_LED_PIN, COLOR_ORDER>(LEFT, NUM_LEDS)
      .setCorrection(TypicalLEDStrip);
  FastLED.addLeds<LED_TYPE, RIGHT_LED_PIN, COLOR_ORDER>(RIGHT, NUM_LEDS)
      .setCorrection(TypicalLEDStrip);

  FastLED.setMaxPowerInVoltsAndMilliamps(MAX_V, MAX_POWER);

  FastLED.setBrightness(BRIGHTNESS);

  pinMode(BRAKE_PIN, INPUT);
  pinMode(BACKLIGHT_PIN, INPUT);
  pinMode(LEFT_PIN, INPUT);
  pinMode(RIGHT_PIN, INPUT);
  pinMode(MARKER_LIGHT_PIN, INPUT);
}

void loop() {
  graphics();
  input();
}