/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that outputs engineering properties in a table.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color F5");

    for(int i = 2; i <= 10; i = i+2)
    {
        for(int j = 2; j <= 12; j = j+2)
        {
            printf("Base = %d\n", i);
            printf("Height = %d\n", j);
            printf("Cross-Section Area = %d\n", i * j);
            printf("Moment Of Inertia = %.2f\n", (float) (i *(j * j * j)) / 12);
            printf("Section Modulus = %.2f\n\n", (float) (i * j) / 6);
        }
    }

    return 0;
}
