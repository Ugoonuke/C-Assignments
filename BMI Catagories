/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that calculates your Body Mass Index and catagorises it.
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
    printf("\nYour BMI: %.2fkg/m^2\n", bmi);

    if(bmi < 18.5){
    printf("You are Underweight!\n");
    }
    if(bmi >= 18.5 && bmi < 25){
    printf("You are Normal Weight.\n");
    }
    if(bmi >= 25 && bmi < 30){
    printf("You are Overweight!\n");
    }
    if(bmi >= 30){
    printf("You are Obese!\n");
    }

}
