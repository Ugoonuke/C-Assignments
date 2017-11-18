/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that computes the sum of harmonic series.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("color F9");

    int n, x;
    float y=0;
    printf("Please enter the number of harmonics below...\n\n");
    scanf("%d", &n);

    for(x=1; x<=n; x++)
    {
        y=y+(1.0/x); // Sum of the harmonic series.
    }
    printf("This is the sum of the harmonic series.\n\n%.2f\n", y);
    return 0;
}
