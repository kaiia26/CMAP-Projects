/* Write a program that accepts a date from a user in the form mm/dd/yyyy and then displays it in the form yyyymmdd */

#include <stdio.h>

int main(void) {

    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");      // User inputs date
    scanf("%d/%d/%d", &month, &day, &year);     // scanf converts the numbers into mm/dd/yy format


    printf("You entered the date %d%02d%02d\n", year, month, day);      // input is converted into yyyymmdd format, with 0 for padding(if needed)


    return 0;

}
