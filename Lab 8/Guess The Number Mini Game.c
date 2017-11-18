/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that plays the game of ‘guess the number’.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    system("color F9");
    int a,b, c;
    printf("I have a number between 1 and 100.\n\nCan you guess my number?\n\nPlease type in your first guess: ");
    scanf("%d", &b);
    srand(time(NULL));
    a=1+(rand() % 100);
    if(a == b)
    {
        printf("\nExcellent! You guessed the number!\n");
    }
    while(b<a)
    {
        printf("\nToo low.\n\n1 = Try again\n\n2 = Give Up\n\n");
        scanf("%d", &c);
        if(c == 1)
        {
            system("cls");
            printf("Please type in your guess: ");
            scanf("%d", &b);
            while(b>a)
            {
                printf("\nToo High.\n\n1 = Try again\n\n2 = Give Up\n\n");
                scanf("%d", &c);
                if(c == 1)
                {
                    system("cls");
                    printf("Please type in your guess: ");
                    scanf("%d", &b);
                    if(b == a)
                    {
                        printf("\nExcellent! You guessed the number!\n");
                    }
                }
                if(c == 2)
                {
                    return 0;
                }
            }
            if(b == a)
            {
                printf("\nExcellent! You guessed the number!\n");
            }
        }
        if(c == 2)
        {
            return 0;
        }
    }
    while(b>a)
    {
        printf("\nToo High.\n\n1 = Try again\n\n2 = Give Up\n\n");
        scanf("%d", &c);
        if(c == 1)
        {
            system("cls");
            printf("Please type in your guess: ");
            scanf("%d", &b);
            while(b<a)
            {
                printf("\nToo Low.\n\n1 = Try again\n\n2 = Give Up\n\n");
                scanf("%d", &c);
                if(c == 1)
                {
                    system("cls");
                    printf("Please type in your guess: ");
                    scanf("%d", &b);
                    if(b == a)
                    {
                        printf("\nExcellent! You guessed the number!\n");
                        return 0;
                    }
                }
                if(c == 2)
                {
                    return 0;
                }
            }
            if(b == a)
            {
                printf("\nExcellent! You guessed the number!\n");
                return 0;
            }
        }
        if(c == 2)
        {
            return 0;
        }
    }
    return 0;
}
