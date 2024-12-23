/* Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed. */

#include <stdio.h>

int main(void)

{

    int number, digit1, digit2, number_mod, number_div;
    printf("Enter a two-digit number: ");
    scanf("%2d", &number);

    number_mod = number % 10;
    digit1 = number_mod;
    number_div = number / 10;
    digit2 = number_div;

    printf("The reversal is:  %d%d", digit1, digit2);


    return 0;
}
