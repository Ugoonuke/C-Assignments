/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program to accept two integer numbers and displays their product.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer1;
    int integer2;
    int sum;

    printf("Enter Two Integers\n\n");
    scanf("%d%d",&integer1, &integer2);

    sum = integer1 * integer2;

    printf("%d times %d equals %d.",integer1,integer2,sum);
    return 0;
}
