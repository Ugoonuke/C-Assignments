/* ------------------------------
 Program: output.c
 Author: Ugo-Michael Onuke
 Purpose: Write a program that writes a large letter C on the screen.
 ------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#define BOTTOM_SPACE "\n\n\n\n\n"
#define OFFSET1 "                      "
#define OFFSET1 "                  "
#define OFFSET2 "               "
#define OFFSET3 "             "
#define OFFSET4 "            "
#define OFFSET5 "           "
#define OFFSET6 "           "
#define TOP_SPACE "\n\n\n\n\n"
int main()
{
int i;
system("color F9");
printf(TOP_SPACE);
printf(OFFSET1 "IIIII\n");
printf(OFFSET2 "IIII\n");
printf(OFFSET3 "III\n");
printf(OFFSET4 "III\n");
printf(OFFSET5 "III\n");
printf(OFFSET6 "III\n");
printf(OFFSET6 "III\n");
printf(OFFSET5 "III\n");
printf(OFFSET4 "III\n");
printf(OFFSET3 "III\n");
printf(OFFSET2 "IIII\n");
printf(OFFSET1 "IIIII\n");
printf(BOTTOM_SPACE);
return 0;
}
