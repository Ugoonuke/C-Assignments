/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that uses rand() to play a game of 'roullette'.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char s[10];
    int a,b,e,f;
    float c,d;
    system("color F9");
    srand(time (NULL));
    printf("Please place your bet (EUR): ");
    scanf("%f", &c);
    d=c+(c*0.47);
    printf("\nPlease choose a colour below...\n\n1 = Black\n\n2 = Red\n\n");
    scanf("%d", &a);
    b=(rand() % 38);
    e=1+(rand() % 2);
    if(b == 0)
    {
        printf("\nThe wheel rolls %d.\nYou get your money back (%.2f)", b, c);
    }
    else
    {
        if(e == 1)
        {
            printf("\nThe wheel rolls..\n\n");
            system("cls");
            system("pause");
            printf("\n%d ", b);
            s[0]='B';
            s[1]='l';
            s[2]='a';
            s[3]='c';
            s[4]='k';
            for(int i=0; i<5; i++)
            {
                printf("%c", s[i]);
            }
            if(a == 1)
            {
                printf("\nYou won %.2f Euro!", d);
            }
            while(a != e)
            {
                printf("\nYou Lost!\n\n1 = Try again!\n\n2 = Give up!\n\n");
                scanf("%d", &f);
                if(f == 1)
                {
                    system("cls");
                    printf("Please place your bet (EUR): ");
                    scanf("%f", &c);
                    printf("\n\nPlease choose a colour below...\n\n1 = Black\n\n2 = Red\n\n");
                    scanf("%d", &a);
                    b=(rand() % 38);
                    e=1+(rand() % 2);
                    printf("\nThe wheel rolls..\n\n");
                    system("cls");
                    system("pause");
                    printf("\n%d ", b);
                    if(e == 1)
                    {
                        s[0]='B';
                        s[1]='l';
                        s[2]='a';
                        s[3]='c';
                        s[4]='k';
                        for(int i=0; i<5; i++)
                        {
                            printf("%c", s[i]);
                        }
                    }
                    if(e == 2)
                    {
                        s[0]='R';
                        s[1]='e';
                        s[2]='d';
                        for(int i=0; i<3; i++)
                        {
                            printf("%c", s[i]);
                        }
                    }
                    if(a == e)
                    {
                        printf("\nYou won %.2f Euro!", d);
                        return 0;
                    }
                }
                if(f == 2)
                {
                    return 0;
                }
            }
        }
        if(e == 2)
        {
            printf("\nThe wheel rolls..\n\n");
            system("cls");
            system("pause");
            printf("\n%d ", b);
            s[0]='R';
            s[1]='e';
            s[2]='d';
            for(int i=0; i<3; i++)
            {
                printf("%c", s[i]);
            }
            if(a == 2)
            {
                printf("\nYou won %.2f Euro!", d);
            }
            while(a != e)
            {
                printf("\nYou Lost!\n\n1 = Try again!\n\n2 = Give up!\n\n");
                scanf("%d", &f);
                if(f == 1)
                {
                    system("cls");
                    printf("Please place your bet (EUR): ");
                    scanf("%f", &c);
                    printf("\n\nPlease choose a colour below...\n\n1 = Black\n\n2 = Red\n\n");
                    scanf("%d", &a);
                    b=(rand() % 38);
                    e=1+(rand() % 2);
                    printf("\nThe wheel rolls..\n\n");
                    system("cls");
                    system("pause");
                    printf("\n%d ", b);
                    if(e == 1)
                    {
                        s[0]='B';
                        s[1]='l';
                        s[2]='a';
                        s[3]='c';
                        s[4]='k';
                        for(int i=0; i<5; i++)
                        {
                            printf("%c", s[i]);
                        }
                    }
                    if(e == 2)
                    {
                        s[0]='R';
                        s[1]='e';
                        s[2]='d';
                        for(int i=0; i<3; i++)
                        {
                            printf("%c", s[i]);
                        }
                    }
                    if(a == e)
                    {
                        printf("\nYou won %.2f Euro!", d);
                        return 0;
                    }
                }
                if(f == 2)
                {
                    return 0;
                }
            }
        }
    }
    return 0;
}
