/* Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement,
followed by the sums of the rows, columns, and diagonals.
If the row, column, and diagonal sums are all the same, the numbers are said to form a magic square. */

#include <stdio.h>

int main(void)
{

int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;
int row_1, row_2, row_3, row_4, row_sums, column_1, column_2, column_3, column_4, column_sums, diagonal_1, diagonal_2, diagonal_sums;


printf("Enter the numbers from 1 to 16 in any order: ");
scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
&num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);

printf("\n");
printf("%d\t%d\t%d\t%d", num1, num2, num3, num4);
printf("\n");
printf("%d\t%d\t%d\t%d", num5, num6, num7, num8);
printf("\n");
printf("%d\t%d\t%d\t%d", num9, num10, num11, num12);
printf("\n");
printf("%d\t%d\t%d\t%d", num13, num14, num15, num16);

row_1 = num1 + num2 + num3 + num4;
row_2 = num5 + num6 + num7 + num8;
row_3 = num9 + num10 + num11 + num12;
row_4 = num13 + num14 + num15 + num16;

column_1 = num1 + num5 + num9 + num13;
column_2 = num2 + num6 + num10 + num14;
column_3 = num3 + num7 + num11 + num15;
column_4 = num4 + num8 + num12 + num16;

diagonal_1 = num4 + num7 + num10 + num13;
diagonal_2 = num1 + num6 + num11 + num16;

printf("\n\n");
printf("Row sums: %d %d %d %d", row_1, row_2, row_3, row_4);
printf("\n");
printf("Column sums: %d %d %d %d", column_1, column_2, column_3, column_4);
printf("\n");
printf("Diagonal sums: %d %d", diagonal_1, diagonal_2);


return 0;

}
