/**
 * mpg2km.c /  Program in C
 *
 * FNU Aravind Santhosh Kumar / CS5600 / Northeastern University
 * Fall 2025 / Sep 6, 2025
 * 
 * code formatted using  clang-format
 *   `clang-format -i  *.c`
 *   `clang-format -i  *.h`
 *
 * function implementaitons of mileage/efficiency metrics
 *
 *
 */

#include <math.h>

//  constants for milage conversions
#define KM_PER_MILE 1.60f
#define L_PER_GAL 3.78f
#define LPG_PER_MPG (100.0f * L_PER_GAL / KM_PER_MILE)

// function check for invalid input
int isInvalid(float val) {
  if (val <= 0.0 || isnan(val) || isinf(val)) {
    return 1;
  } else {
    return 0;
  }
}

// function that takes in miles per gallon and returns the kilometer per liter
float mpg2kml(float mpgVal) {
  if (isInvalid(mpgVal))
    return NAN;
  return mpgVal * (KM_PER_MILE / L_PER_GAL);
}

// function that takes in miles per gallon and returns the liters per 100
// kilometer
float mpg2lphm(float mpgVal) {
  if (isInvalid(mpgVal))
    return NAN;
  return LPG_PER_MPG / mpgVal;
}

// function that takes in liters per 100 kilometers and returns the miles per
// gallon
float lph2mpg(float lph) {
  if (isInvalid(lph))
    return NAN;
  return LPG_PER_MPG / lph;
}
