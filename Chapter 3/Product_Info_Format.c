/* Write a program that formats product information entered by the user. The item number and date should be left justified; the unit price
should be right justified
Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns */

#include <stdio.h>

int main(void) 
{

int item_number, purchase_date, month, day, year;
float unit_price;

printf("Enter item number: ");
scanf("%d", item_number);

printf("Enter item price: ");
scanf("%.1f", unit_price);

printf("Enter purchase date (mm/dd/yyyy): ");
scanf("%d/%d/%d", &month, &day, &year );


printf("Item\t\t Unit\t\t Purchase");         // tabs for formatting
printf("\t\tPrice\t\t Date");               // tabs for formatting
printf("%-10d", item_number);                //left-justifies item_number and adds spaces between item and unit price columns
printf("$%2d");                            // right-justifies and adds space between $ symbol and the unit_price
printf("%4.2f", unit_price);              // specifies float format specifier for unit price to be counted as two decimals
printf("%-5d");                            // left-justifies to add space between unit_price and purchase_date columns
printf("%0d/%0d/%d", month, day, year);       //input is padded by 0 in case there is a single value 


return 0;
}
