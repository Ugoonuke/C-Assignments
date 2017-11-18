/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that reads in the sides of a square and then prints the square out of asterisks.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, x, y, z;

    system("color F9");

    printf("Please enter the magnitude of the side of a square between 1 - 20 below...\n\n");
    scanf("%d", &x);

    while(x < 1 || x > 20)
    {
        printf("The value you entered is not between 1 - 20.\n\nPlease enter a new value between 1 - 20 below...\n\n");
        scanf("%d", &x);
    }

    printf("\n\nThe value you entered in is %d\n\nIs this value correct?\n\n Enter:\n\n1 = Yes\n\n0 = No\n\n", x);
    scanf("%d", &a);
    if(a == 0)
    {
        system("cls");
        printf("Please enter the magnitude of the side of a square between 1 - 20 below...\n\n");
        scanf("%d", &x);

        while(x < 1 || x > 20)
        {
            printf("The value you entered is not between 1 - 20.\n\nPlease enter a new value between 1 - 20 below...\n\n");
            scanf("%d", &x);
        }
    }
    system("cls");

    for(y = 0; y < x; y++)
    {
        for(z = 0; z < x; z++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
