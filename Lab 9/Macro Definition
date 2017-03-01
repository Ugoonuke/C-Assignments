/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that shows that a macro definition can use both functions and macros in its body.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SQ(x) (x*x)
#define CUBE(x) (SQ(x) *x)
#define F_POW(x) sqrt(sqrt(CUBE(x)))

int main()
{
    system("color F9");
    int x;
    printf("Please enter a number below...\n\n");
    scanf("%d", &x);
    printf("\n(%d) Squared: %d\n(%d) Cubed: %d\n(%d) F_Pow: %.2f\n\n" , x,SQ(x), x, CUBE(x), x, (float)F_POW(x));
    return 0;
}
