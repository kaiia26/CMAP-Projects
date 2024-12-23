/* Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit number without using arithmetic to split
the number into digits. */

#include <stdio.h>

int main(void)
{

int number, i1, i2, i3, digit1, digit2, digit3, number_mod, number_div1, number_div2;
    printf("Enter the first (single) digit: ");
    scanf("%1d", &i1);
    printf("Enter the second (single) digit: ");
    scanf("%1d", &i2);
    printf("Enter the third (single) digit: ");
    scanf("%1d", &i3);

    printf("The reversal is: %1d%1d%1d", i3, i2, i1);


    return 0;
    
}
