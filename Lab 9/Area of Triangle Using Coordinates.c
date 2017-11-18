/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that calculates the area of a triangle.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define AREA(x1,x2,x3,y1,y2,y3) (sqrt((((sqrt((pow((x2-x1),2)+(pow((y2-y1),2)))+(sqrt((pow((x3-x2),2)+(pow((y3-y2),2)))+(sqrt((pow((x3-x1),2)+(pow((y3-y1),2))))/2)*((((sqrt((pow((x2-x1),2)+(pow((y2-y1),2)))+(sqrt((pow((x3-x2),2)+(pow((y3-y2),2)))+(sqrt((pow((x3-x1),2)+(pow((y3-y1),2))))/2)-(sqrt((pow((x2-x1),2)+(pow((y2-y1),2))))*((((sqrt((pow((x2-x1),2)+(pow((y2-y1),2)))+(sqrt((pow((x3-x2),2)+(pow((y3-y2),2)))+(sqrt((pow((x3-x1),2)+(pow((y3-y1),2))))/2)-(sqrt((pow((x3-x2),2)+(pow((y3-y2),2))))*((((sqrt((pow((x2-x1),2)+(pow((y2-y1),2)))+(sqrt((pow((x3-x2),2)+(pow((y3-y2),2)))+(sqrt((pow((x3-x1),2)+(pow((y3-y1),2))))/2)-(sqrt((pow((x3-x1),2)+(pow((y3-y1),2))))))))))))))))))))))))))))))))))))
int main()
{
    system("color F9");
    int pt1[2], pt2[2], pt3[2], x1, x2, x3, y1, y2, y3;
    printf("Please enter your three (x,y) coordinates below...\n\n");
    printf("Point 1:\n");
    printf("\nx1: ");
    scanf("%d" ,&pt1[0]);
    x1=pt1[0];
    printf("y1: ");
    scanf("%d" ,&pt1[1]);
    y1=pt1[1];
    printf("\n");
    printf("Point 2:\n");
    printf("\nx2: ");
    scanf("%d" ,&pt2[0]);
    x2=pt2[0];
    printf("y2: ");
    scanf("%d" ,&pt2[1]);
    y2=pt2[1];
    printf("\n");
    printf("Point 3:\n");
    printf("\nx3: ");
    scanf("%d" ,&pt3[0]);
    x3=pt3[0];
    printf("y3: ");
    scanf("%d" ,&pt3[1]);
    y3=pt3[1];
    printf("\n");
    printf("Area of Triangle: %.2funits^2\n" ,AREA(x1,x2,x3,y1,y2,y3));
    return 0;
}
