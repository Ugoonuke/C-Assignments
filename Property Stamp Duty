/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that calculates the Stamp Duty payable on a property.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("color F9");

    float a = 0, prop, rate1, rate2, rate3, rate4, rate5;

    rate1 = 0.02;
    rate2 = 0.05;
    rate3 = 0.075;
    rate4 = 0.1;
    rate5 = 0.125;

    printf("Please enter the value of your property below.\n\n");
    scanf("%f", &prop);

    if(prop <= 100000)
    {
        a = prop * rate1;
        printf("Your Stamp Duty Rate is %.1f%\n\n", rate1 * 100);
        printf("Your Stamp Duty due is %.2f Euro\n", a);
    }
        if(prop > 100000 && prop < 150000)
    {
        a = prop * rate2;
        printf("Your Stamp Duty Rate is %.1f%\n\n", rate2 * 100);
        printf("Your Stamp Duty due is %.2f Euro\n", a);
    }
        if(prop >= 150000 && prop < 200000)
    {
        a = prop * rate3;
        printf("Your Stamp Duty Rate is %.1f%\n\n", rate3 * 100);
        printf("Your Stamp Duty due is %.2f Euro\n", a);
    }
        if(prop >= 200000 && prop < 250000)
    {
        a = prop * rate4;
        printf("Your Stamp Duty Rate is %.1f%\n\n", rate4 * 100);
        printf("Your Stamp Duty due is %.2f Euro\n", a);
    }
        if(prop >= 250000)
    {
        a = prop * rate5;
        printf("Your Stamp Duty Rate is %.1f%\n\n", rate5 * 100);
        printf("Your Stamp Duty due is %.2f Euro\n", a);
    }
    return 0;
}
