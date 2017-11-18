/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that calculates the average and polynomial.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define AVE(x,y,z) ((x+y+z)/3)
#define POLYNOMIAL(x) ((3*(pow(x,2)))+(2*(pow(x,4)))-(5*(pow(x,3)))-(pow(x,2))+(7*x)-6)
int main()
{
    system("color F9");
    int a[3];
    float x,y,z;
    printf("Please enter three values below...\n\n");
    for(int i=0; i<3; i++)
    {
        printf("%d) ", i+1);
        scanf("%d", &a[i]);
    }
    x=a[0];
    y=a[1];
    z=a[2];
    printf("\nThe average value is %.2f\n", AVE(x,y,z));
    printf("\nPlease enter a value for (x) below...\n\n");
    scanf("%f", &x);
    printf("\nPolynomial of(%.2f): %.2f\n", x, POLYNOMIAL(x));
    return 0;
}
