/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that calculates your Body Mass Index.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float weight, height, bmi;

    printf("Please enter your weight in (kg): ");
    scanf("%f", &weight);
    printf("Please enter your height in (m): ");
    scanf("%f", &height);

    bmi = weight/(height*height);

    printf("Your BMI: %.2fkg/m^2", bmi);

    return 0;
}
