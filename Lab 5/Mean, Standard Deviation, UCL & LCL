/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that accepts ten values from the user and calculates the Mean, Standard Deviation, UCL & LCL.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("color F9");

    int i, data[10], j = 0, a;
    float k, x, z, q, p, y = 0;
    printf("Please enter ten values.\n\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d) ", i+1);
        scanf("%d", &data[i]);
        j = j + data[i]; // Sum of 10 digits.
    }

    x = j / 10.0; // This is the mean.
    for(i = 0; i < 10; i++)
    {
        k = data[i] - x;
        y = y + pow(k , 2);
    }
    p = sqrt(y / (10 - 1)); // This is the Standard Deviation.
    z = x + (p * 3); // This is the UCL.
    q = x - (p * 3); // This is the LCL.

    printf("\nAre the above values correct?\n\nEnter:\n\n1 = Yes\nor\n0 = No\n\n");
    scanf("%d", &a);

    while(a == 0)
    {
        system("cls");
        for(i = 0; i < 10; i++){
            data[i] = 0;
        }
        k = 0;
        x = 0;
        z = 0;
        q = 0;
        p = 0;
        y = 0;
        j = 0;

        printf("Please enter ten values.\n\n");

        for(i = 0; i < 10; i++)
        {
            printf("%d) ", i+1);
            scanf("%d", &data[i]);
            j = j + data[i]; // Sum of 10 digits.
        }

        x = j / 10.0; // This is the mean.
        for(i = 0; i < 10; i++)
        {
            k = x - data[i];
            y = y + pow(k , 2);
        }
        p = sqrt(y / (10 - 1)); // This is the Standard Deviation.
        z = x + (p * 3); // This is the UCL.
        q = x - (p * 3); // This is the LCL.

        printf("\nAre the above values correct?\n\nEnter:\n\n1 = Yes\nor\n0 = No\n\n");
        scanf("%d", &a);
    }
    system("cls");
    system("pause");

    printf("\nMean = %.2f\n\nStandard Deviation = %.2f\n\nUpper Critical Limit (UCL) = %.2f\n\nLower Critical Limit (LCL) = %.2f\n", x, p, z, q);

    return 0;
}
