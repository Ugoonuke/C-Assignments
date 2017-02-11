/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that accepts both a cash amount and an interest rate from the user.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cash;
    float interest;
    float interest_due;
    float total;

    printf("Please enter a cash amount (Euros): ");
    scanf("%f", &cash);
    printf("Please enter a tax rate (percent): ");
    scanf("%f", &interest);

    interest_due = (interest / 100) * cash;
    total = interest_due + cash;

    printf("Interest due (euros): %.2f\nTotal amount (euros): %.2f", interest_due, total);
    return 0;
}
