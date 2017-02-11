/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that calculates the total resistance of three resistors in parallel and series.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("color F9");
    int x;
    float r1, r2, r3, p, s;
    printf("Please enter in three resistor values below...\n\n");
    scanf("%f%f%f", &r1, &r2, &r3);
    s = r1+r2+r3;
    p = 1/((1/r1)+(1/r2)+(1/r3));
    printf("\n\nAre the resistors in:\n\n1 = Parallel\n\n2 = Series\n\n");
    scanf("%d", &x);
    if(x == 1)
    {
        printf("\n\nThe total resistance in Parallel is %.2f\n\n", p);
    }
    if(x == 2)
    {
            printf("\n\nThe total resistor in Series is %.2f\n\n", s);
    }
    return 0;
}
