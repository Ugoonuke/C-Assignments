/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that calculates the height of a cylinder.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius, height, volume;

    printf("Please enter radius (cm): ");
    scanf("%f", &radius);
    printf("Please enter volume (cm): ");
    scanf("%f", &volume);

    height = volume/((radius * radius) * 3.14);

    printf("Height (cm): %.2f", height);

    volume = height*(radius*radius)*3.14;
    printf("Volume is %.2f", volume);
    return 0;
}
