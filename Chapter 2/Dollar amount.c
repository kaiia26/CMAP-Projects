/* Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay the amount using the smallest 
number of $20, $10, $5, and $1 bills 

Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce the amount by the total value of the
$20 bills. Repeat for the other bill sizes. Be sure to use integer values throughout, not floating-point numbers.*/

#include <stdio.h>

int main(void)
{

int amount, amountNeeded20, amountNeeded10, amountNeeded5, amountNeeded1, remainingAmount20, remainingAmount10,
remainingAmount5, remainingAmount1;
      
printf("Enter a dollar amount: ");
scanf("%i", &amount);
printf("\n");

amountNeeded20 = amount / 20;  // For instance 93 / 20 = 4.65 or 4 // or $10 left because 20 x 4 = 80, and 90 - 80 is $10
remainingAmount20 = amount - (amountNeeded20 * 20); // gives $13 left
printf("$20 bills: %i\n", amountNeeded20); // prints out 4 $20 bills

amountNeeded10 = remainingAmount20 / 10;  // Gives 13 / 10, which is 1.3, rounds down to 1
remainingAmount10 = remainingAmount20 - (amountNeeded10 * 10); // gives $3 left
printf("$10 bills: %i\n", amountNeeded10); // prints out 1 $10 bill

amountNeeded5 = remainingAmount10 / 5; // Gives 3 / 5 which is 0.6, rounds down to 0
remainingAmount5 = remainingAmount10 - (amountNeeded5 * 5); // gives $3 left
printf("$5 bills: %i\n", amountNeeded5); //prints out 0 $5 bills

amountNeeded1 = remainingAmount5 / 1; // Gives 3 / 1 which is 3
remainingAmount1 = remainingAmount5 - (amountNeeded1 * 1); // gives $0 left
printf("$1 bills: %i\n", amountNeeded1); //prints out 3 $1 bills


    return 0;
}
