/* Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement,
followed by the sums of the rows, columns, and diagonals.
If the row, column, and diagonal sums are all the same, the numbers are said to form a magic square. */

#include <stdio.h>

int main(void)
{

int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;


printf("Enter the numbers from 1 to 16 in any order: ");
scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
&num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);

printf("\n");
printf("%d\t%d\t%d\t%d", num1, num2, num3, num4);
printf("\n")



}
