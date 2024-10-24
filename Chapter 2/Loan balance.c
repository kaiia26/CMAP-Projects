/*  - Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payment
    - Display each balance with two digits after the decimal point
    - Hint: Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate.
    - To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12. */

#include <stdio.h>

int main(void)
{

float loan, balance, increaseBalance, decreaseBalance, decreaseBalance1, decreaseBalance2, decreaseBalance3, 
interestRate, monthlyInterestRate, monthlyPayment, firstPayment, secondPayment, thirdPayment;  

printf("Enter the amount of loan: ");
scanf("%.2f", &loan );

printf("Enter interest rate: ");
scanf("%f", &interestRate);

printf("Enter monthly payment: ");
scanf("%.2f", &monthlyPayment);
printf("\n");

monthlyInterestRate = interestRate / 12.0;      // interest rate is divided by 12 months to calculate monthly

balance = loan;    // balance is the loan that the user has
decreaseBalance = balance - monthlyPayment;   // balance is decreased by the user paying monthly payments
increaseBalance = balance * monthlyInterestRate;     // balance is increased by the monthly interest rate   

decreaseBalance1 = decreaseBalance;
firstPayment = balance - decreaseBalance1; //how to update decreaseBalance each time it is calculated? By storing it in a new variable!
decreaseBalance1 = firstPayment;
decreaseBalance2 = decreaseBalance1;
secondPayment = firstPayment - decreaseBalance2;
decreaseBalance2 = secondPayment;
decreaseBalance3 = decreaseBalance2;
thirdPayment = secondPayment - decreaseBalance3;  

printf("Balance remaining after the first payment: %.2f", firstPayment);
printf("Balance remaining after the second payment: %.2f", secondPayment);
printf("Balance remaining after the third payment: %.2f", thirdPayment);


    return 0;
}
