/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that that accepts your first name and returns it to the screen ten times.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color F9");
    char c[10];
    printf("Please enter your name below...\n\n");
    scanf("%s", &c);
    for(int i=0; i<10; i++)
    {
        for(int j=0; c[j]!='\0'; j++)
        {
            printf("%c", c[j]);
        }
        printf("\n");
    }
    printf("\nPlease enter your name below...\n\n");
    scanf("%s", &c);
    for(int i=0; i<10; i++)
    {
        printf("%s\n", c);
    }
    return 0;
}
