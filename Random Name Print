/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that prompts the user to enter their name and outputs their name a random number of times.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("color F9");
    char a[15];
    printf("Please enter your name below...\n\n");
    scanf("%s", a);
    printf("\n");
    srand(time( NULL ));
    for(int i=0; i<(1+( rand() % 20)); i++)
    {
        printf("%s\n", a);
    }
    return 0;
}
