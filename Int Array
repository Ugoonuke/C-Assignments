/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that creates an array of 10 elements of type int called lab1_array.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lab1_array[10], last_one[12], c=0;
    system("color F9");
    for(int i=0; i<10; i++)
    {
        printf("Please enter an integer below...\n\n");
        printf("%d) ", i+1);
        scanf("%d", &lab1_array[i]);
        printf("\n");
    }
    printf("\nThe values you have entered in are:\n");
    for(int i=0; i<10; i++)
    {
        printf("Lab1_array[%d] = %d\n", i, lab1_array[i]);
    }
    printf("\n\nPlease enter twelve integer below to be summed up...\n\n");
    for(int i=0; i<12; i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%d", &last_one[i]);
        c=c+last_one[i];
        printf("\nTotal = %d\n\n", c);
    }

    return 0;
}
