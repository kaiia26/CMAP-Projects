/* Extend the program in Programming Project 1 to handle three-digit numbers. */

#include <stdio.h>

int main(void)

{

    int number, digit1, digit2, digit3, number_mod, number_div1, number_div2;
    printf("Enter a three-digit number: ");
    scanf("%3d", &number);

// for 100
    number_div1 = number / 10;
    digit1 = number_div1 / 10; // gives 1
    number_div2 = number_div1; // gives 10
    digit2 = number_div2 % 10; // gives 0
    digit3 = digit2; // gives 0

    printf("The reversal is:  %1d%1d%1d", digit3, digit2, digit1);


    return 0;
    
}
