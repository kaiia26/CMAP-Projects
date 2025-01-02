/* Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form */

#include <stdio.h>

int main(void)
{
    int hour, minutes, reg_hour;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hour, &minutes);

    reg_hour = hour - 12;


    if (hour >= 11 && hour != 12 && hour <= 24) {
        printf("Equivalent 12-hour time: %2d:%02d AM", reg_hour, minutes);
    } else if (hour >= 13 && hour <= 23) {
        printf("Equivalent 12-hour time: %2d:%02d PM", reg_hour, minutes);
    } else if (hour == 12) {
        printf("Equivalent 12-hour time: %2d:%02d PM", hour, minutes);
    } else if (hour == 0) {
        reg_hour = 12;
        printf("Equivalent 12-hour time: %2d:%02d AM", reg_hour, minutes);
    }

    return 0;
}
