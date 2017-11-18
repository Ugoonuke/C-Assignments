/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that prompts the user for three variables and outputs volume and mass.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length, width, height, volume, mass;

    printf("Please enter length, width and height (cm):\n\n");
    scanf("%f%f%f", &length, &width, &height);

    volume = length * width * height;
    mass = volume * 2.7;

    printf("Volume: %.1fcm cubed\nDimentional weight (Kg): %.1fKg", volume, mass);
    return 0;
}
