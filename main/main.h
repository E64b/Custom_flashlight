#pragma once

#include <Arduino.h>
#include <FastLED.h>
#include <inttypes.h>
#include <stdio.h>

#define LED_TYPE WS2812
#define COLOR_ORDER GRB

/* ==SETUP== */
#define BRIGHTNESS 255 // 0 ... 255
#define MAX_A 4
#define MAX_V 15
#define RIGHT_PIN 12
#define LEF_PIN 13

#define WIDTH 47
#define HEIGHT 11
#define NUM_LEDS (WIDTH * HEIGHT)
#define MAX_POWER (MAX_A * 1000)

#pragma pack(1, push)

#pragma pack(pop)

extern CRGB LEFT[NUM_LEDS];
extern CRGB RIGHT[NUM_LEDS];
extern Data data;
extern const uint32_t *GetImage(uint8_t imgCode);