/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that calculates the perimeter and the area of a rectangle.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("color F9");
    int x[3], y[3], a, b, c, d;
    printf("Please enter the (x,y) coordinates of the rectangle below...\n\n");
    for(int i=0; i<3; i++)
    {
        printf("x%d: ", i+1);
        scanf("%d", &x[i]);
        printf("y%d: ", i+1);
        scanf("%d", &y[i]);
        printf("\n");
    }
    a=sqrt((pow((x[1]-x[0]),2))+(pow((y[1]-y[0]),2))); // The lenght between point 1 and point 2.
    b=sqrt((pow((x[2]-x[1]),2))+(pow((y[2]-y[1]),2))); // The lenght between point 2 and point 3.
    c=(2*a)+(2*b); // The perimeter.
    d=a*b; // The area.
    printf("Perimeter of the rectangle: %d units.\n\nArea of the rectangle: %d^2 units.\n", c, d);
    return 0;
}
