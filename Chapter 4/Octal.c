/* Write a program that reads an integer entered by the user and displays it in octal (base 8) */
/* The output should be displayed using five digits, even if fewer digits are sufficient. Hint: To convert the number to octal, first divide
it by 8; the remainder is the last digit of the octal number (1, in this case). Then divide the original number by 8 and repeat the process to
arrive at the next-to-last digit. */

#include <stdio.h>

int main(void)
{
    int number, div, div1, div2, div3, div4, remainder, remainder1, remainder2, remainder3, remainder4;

    printf("Enter a number between 0 and 32767: ");
    scanf("%5d", &number);


    div = number / 8;              // 1
    remainder = number % 8;

    div1 = div / 8;               // 2
    remainder1 = div % 8;

    div2 = div1 / 8;             // 3
    remainder2 = div1 % 8;

    div3 = div2 / 8;            // 4
    remainder3 = div2 % 8;

    div4 = div3 / 8;          // 5
    remainder4 = div3 % 8;


    printf("In octal, your number is: %1d%1d%1d%1d%1d", remainder4, remainder3, remainder2, remainder1, remainder);


    return 0;
}
