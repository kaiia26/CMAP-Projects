/* Extend the program in Programming Project 1 to handle three-digit numbers. */

#include <stdio.h>

int main(void)

{

    int number, digit1, digit2, digit3, number_mod, number_div;
    printf("Enter a three-digit number: ");
    scanf("%3d", &number);

    number_mod = number % 10;
    digit1 = number_mod;
    number_div = number / 10;
    digit2 = number_div;
    digit3 = number_mod;

    printf("The reversal is:  %d%d%d", digit1, digit3, digit2);


    return 0;
    
}
