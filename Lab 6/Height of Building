/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that computes the height of a building.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float h, t[3], a = 0;
    system("color F9");
    printf("Please enter the times in seconds for the stone to reach the ground below...\n\n");
    for(int x=0;x<3;x++)
    {
        scanf("%f", &t[x]);
        a=a+t[x]; // Sum of times.
    }
    a=a/3; // Average time.
    h=0.5*(9.81*pow(a,2)); // Height calculation.
    printf("\nThe height of the building is %.2f\n", h);
    return 0;
}
