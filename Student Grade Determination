/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that accepts a student score entered by the user and determines the corresponding grade.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float grade;
    system("color F9");
    printf("Please enter your percentage grade below.\n\n");
    scanf("%f", &grade);

    while(grade < 0 || grade > 100)
    {
        printf("The grade you entered exceeds the limit.\nPlease enter a grade from 0 - 100. \n\n");
        scanf("%f", &grade);
    }
    system("cls");

    if(grade < 40)
    {
        printf("Your grade is: F\n");
    }
    if(grade > 40 && grade < 50)
    {
        printf("Your grade is: D\n");
    }
    if(grade >= 50 && grade < 70)
    {
        printf("Your grade is: C\n");
    }
    if(grade >= 70 && grade < 80)
    {
        printf("Your grade is: B\n");
    }
    if(grade >= 80 && grade <= 100)
    {
        printf("Your grade is: A\n");
    }
    return 0;
}
