/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program to display a multiplication table.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("color F9");
    int n, m;
    printf("Please enter a number below...\n\n");
    scanf("%d", &n);
    printf("\nMultiplication Table\n\n");
    for(int i=1; i<=n; i++)
    {
        printf("%d)  ", i); // Line numbering.
        for(int j=1; j<=n; j++) // Nested for loop.
        {
            m=i*j; // Table generator.
            printf("%d ", m);
        }
        printf("\n");
    }
    return 0;
}
