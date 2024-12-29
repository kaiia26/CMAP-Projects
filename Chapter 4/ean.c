/* Modify the upc.c program of Section 4.1 so that it calculates the check digit for an EAN. The user will enter the first 12 digits of
the EAN as a single number */

// Add the second, forth, sixth, eighth, tenth, and twelfth digits.
// Add the first, third, fifth, seventh, ninth, and eleventh digits.
// Multiply the first sum by 3 and add it to the second sum.
// Subtract 1 from the total.
// Compute the remainder when the adjusted total is divided by 10..
// Subtract the remainder from 9. 

#include <stdio.h>

int main(void)
{

    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, j6, first_sum, second_sum, check_digit, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &j6);

    first_sum = i1 + i3 + i5 + j2 + j4 + j6;
    second_sum = d + i2 + i4 + j1 + j3 + j5;
    total = (3 * first_sum) + second_sum;

    printf("Check digit: %1d", 9 - ((total- 1) % 10));

    return 0;
    
}
