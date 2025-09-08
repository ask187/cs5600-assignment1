/*
 * AravindsanthoshkumarF.c /  Program in C
 *
 * FNU Aravind Santhosh Kumar / CS5600 / Northeastern University
 * Fall 2025 / Sep 6, 2025
 * 
 * code formatted using  clang-format
 *   `clang-format -i  *.c`
 *   `clang-format -i  *.h`
 *
 *  acknowledgements - https://www.geeksforgeeks.org/c/printf-in-c/
 * 
 */
#include "mpg2km.h"
#include <stdio.h>

int main() {
  printf("CS 5600 - Assignment 1 - Program in C\n");

  //  Good Flow Cases
  printf("\n======= GOOD FLOWS =======\n");
  float goodMpgVals[] = {30.0, 120.0, 155.0};
  for (int i = 0; i < 3; i++) {
    float mpg = goodMpgVals[i];
    printf("\nmpg = %.2f \n kml = %.2f, &  L_per_100km = %.2f\n", mpg,
           mpg2kml(mpg), mpg2lphm(mpg));
  }

  float goodLphVals[] = {7.5, 15.0, 100.0};
  for (int i = 0; i < 3; i++) {
    float lph = goodLphVals[i];
    printf("\nL/100km = %.2f \nmpg = %.2f\n", lph, lph2mpg(lph));
  }
  //  Bad Flow Cases

  printf("\n======= BAD FLOWS =====\n");
  float badMpgVals[] = {0.0, -15.0};
  for (int i = 0; i < 2; i++) {
    float mpg = badMpgVals[i];
    printf("\nmpg = %.2f \n kml = %.2f, &  L_per_100km = %.2f\n", mpg,
           mpg2kml(mpg), mpg2lphm(mpg));
  }

  float badLphVals[] = {0.0, -120.0};
  for (int i = 0; i < 2; i++) {
    float lph = badLphVals[i];
    printf("\nL/100km = %.2f \nmpg = %.2f\n", lph, lph2mpg(lph));
  }
}
