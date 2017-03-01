/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that prompts the user to populate the table for all three students for all of the
subjects.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color F9");
    int a[3][4], b[3], c[3];
    float avg=0;
    for(int i=0; i<3; i++)
    {
        printf("Please enter the results of Student %d):\t", i+1);
        for(int j=0; j<4; j++)
        {
            scanf("%d", &a[i][j]);
            printf("\t\t\t\t\t");
        }
        printf("\n");
    }
    system("cls");
    for(int i=0; i<3; i++)
    {
        printf("Student %d) Grades:\t", i+1);
        for(int j=0; j<4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            avg=avg+a[i][j];
        }
        avg=avg/4;
        printf("\nStudent %d) Average Grade: %.1f\n", i+1, avg);
        avg=0;
        if(a[i][0] < a[i][1] && a[i][0] < a[i][2] && a[i][0] < a[i][3])
        {
            b[i]=a[i][0];
        }
        if(a[i][1] < a[i][0] && a[i][1] < a[i][2] && a[i][1] < a[i][3])
        {
            b[i]=a[i][1];
        }
        if(a[i][2] < a[i][0] && a[i][2] < a[i][1] && a[i][2] < a[i][3])
        {
            b[i]=a[i][2];
        }
        if(a[i][3] < a[i][0] && a[i][3] < a[i][1] && a[i][3] < a[i][2])
        {
            b[i]=a[i][3];
        }

        if(a[i][0] > a[i][1] && a[i][0] > a[i][2] && a[i][0] > a[i][3])
        {
            c[i]=a[i][0];
        }
        if(a[i][1] > a[i][0] && a[i][1] > a[i][2] && a[i][1] > a[i][3])
        {
            c[i]=a[i][1];
        }
        if(a[i][2] > a[i][0] && a[i][2] > a[i][1] && a[i][2] > a[i][3])
        {
            c[i]=a[i][2];
        }
        if(a[i][3] > a[i][0] && a[i][3] > a[i][1] && a[i][3] > a[i][2])
        {
            c[i]=a[i][3];
        }

    }
    if(b[0] < b[1] && b[0] < b[2])
    {
        printf("\nLowest Grade Of Class: %d\n", b[0]);
    }
    if(b[1] < b[0] && b[1] < b[2])
    {
        printf("\nLowest Grade Of Class: %d\n", b[1]);
    }
    if(b[2] < b[0] && b[2] < b[1])
    {
        printf("\nLowest Grade Of Class: %d\n", b[2]);
    }
    if(c[0] > c[1] && c[0] > c[2])
    {
        printf("\nHighest Grade Of Class: %d\n", c[0]);
    }
    if(c[1] > c[0] && c[1] > c[2])
    {
        printf("\nHighest Grade Of Class: %d\n", c[1]);
    }
    if(c[2] > c[0] && c[2] > c[1])
    {
        printf("\nHighest Grade Of Class: %d\n", c[2]);
    }
    return 0;
}
