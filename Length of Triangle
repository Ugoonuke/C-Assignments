/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that calculates the third side of a triangle.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("color F9");

    float side1, side2, side3, side3a, angle;

    printf("Please enter the magnitude of sides (b) and (c) of a triangle below.\n\n");
    scanf("%f%f", &side1, &side2);
    printf("Please enter the angle in degrees thats between the two sides below.\n\n");
    scanf("%f", &angle);

    angle = angle * (3.14 / 180);

    side3 = (pow(side1,2) + pow(side2,2)) - (2 * side1 * side2 * cos(angle));

    side3a = sqrt(side3);

    printf("The magnitude of the third side is %.2f", side3a);

    return 0;
}
