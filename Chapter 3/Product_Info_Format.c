/* Write a program that formats product information entered by the user. The item number and date should be left justified; the unit price
should be right justified
Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns */

#include <stdio.h>

int main(void) 
{

int item_number, purchase_date, month, day, year;
float unit_price;

printf("Enter item number: ");
scanf("%d", &item_number);

printf("Enter item price: ");
scanf("%f", &unit_price);

printf("Enter purchase date (mm/dd/yyyy): ");
scanf("%d/%d/%d", &month, &day, &year );


printf("\n");
printf("Item\t\tUnit\t\tPurchase\n\t\t\tPrice\t\tDate");
printf("%-10d", item_number);                
printf("$%2d");                           
printf("%4.2f", unit_price);              
printf("%-5d");                            
printf("%0d/%0d/%d", month, day, year);


return 0;
}
