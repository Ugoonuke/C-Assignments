/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that accepts only three digit number and outputs the number reversed.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer1, hun, num;

    printf("Please enter a three digit number: ");
    scanf("%d", &integer1);
    while(integer1 > 999 || integer1 < 100){
    printf("CAN YOU NOT READ!!!\nPlease enter a three digit number: ");
    scanf("%d", &integer1);}

    hun = integer1 / 100;
    integer1 = integer1 % 100;
    num = integer1 / 10;
    integer1 = integer1 %10;

    integer1 = (integer1 * 100) + (num * 10) + hun;

    printf("Number reversed: %d", integer1);
    return 0;
}
