/**
*AravindsanthoshkumarF.c /  Program in C
*
* FNU Aravind Santhosh Kumar / CS5600 / Northeastern University
* Fall 2025 / Sep 6, 2025
 * 
 * function implementaitons of mileage/efficiency metrics   
 * 
 * 
 */

 #include <math.h>
 #include "mpg2km.h"
 
//  constants for milage conversions 
 #define KM_PER_MILE 1.60f
 #define L_PER_GAL 3.78f
 #define LPG_PER_MPG (100.0f * L_PER_GAL / KM_PER_MILE)


// function that takes in miles per gallon and returns the kilometer per liter 
float mpg2kml(float mpgVal){
    if(mpgVal>0.0){
        // returns the calculations based on formula (googled formula)
        return mpgVal*(KM_PER_MILE/L_PER_GAL);
    } else{
        return NAN;
    }

}


// function that takes in miles per gallon and returns the liters per 100 kilometer  
float mpg2lphm(float mpgVal){
    if(mpgVal>0.0){
        // returns the calculations based on formula (googled formula)
        return LPG_PER_MPG / mpgVal;
    } else{
        return NAN;
    }
    
}


// function that takes in liters per 100 kilometers and returns the miles per gallon 
float lph2mpg(float lph){
    if(lph>0.0){
        return LPG_PER_MPG/lph;
    }else{
        return NAN;
    }

}