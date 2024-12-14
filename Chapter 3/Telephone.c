/* Write a program that prompts the user to enter a telephone number in the form (xxx) xxx- xxxx and then displays the number in the form 
xxx.xxx.xxxx */

#include <stdio.h>

int main(void)
{

int area_code, prefix, line_number;

printf("Enter phone number [ (xxx) xxx-xxxx]: ");
scanf("(%3d) %3d-%4d", &area_code, &prefix, &line_number);

printf("You entered %03d.%03d.%04d", area_code, prefix, line_number); // zero padding in case phone number is less than specified width



    return 0;
}
