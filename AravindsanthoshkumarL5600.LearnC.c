/*
* AravindsanthoshkumarF.c /  Program in C
*
* FNU Aravind Santhosh Kumar / CS5600 / Northeastern University
* Fall 2025 / Sep 6, 2025
*
*/
# include <stdio.h>
#include "mpg2km.h"


float mpg2kml(float mpgVal );
float mpg2lphm(float mpgVal );
float lph2mpg(float lphVal );



int main(){
printf("CS 5600 - Assignment 1 - Program in C\n");
double mpg_vals[] = {30.0, 20.0, 50.0};
    for (int i = 0; i < 3; i++) {
        double mpg = mpg_vals[i];
        printf("[OK] mpg = %.2f -> kml = %.5f, L/100km = %.5f\n",
               mpg, mpg2kml(mpg), mpg2lphm(mpg));
    }

    double lph_vals[] = {7.5, 6.0, 10.0};
    for (int i = 0; i < 3; i++) {
        double lph = lph_vals[i];
        printf("[OK] L/100km = %.2f -> mpg = %.5f\n", lph, lph2mpg(lph));
    }


} 