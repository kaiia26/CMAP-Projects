/* Write a program that accepts a date from a user in the form mm/dd/yyyy and then displays it in the form yyyymmdd */

#include <stdio.h>

int main(void) {

    int month, day, year;

    printf("Enter a date (mm/dd/yyyy)\n: ");
    scanf("%d/%d/%d", &month, &day, &year);


    printf("You entered the date %i%i%i\n", year, month, day);
    scanf("%d%d%d", &year, &month, &day);


    return 0;

}
