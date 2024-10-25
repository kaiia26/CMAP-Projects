/*  - Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payment
    - Display each balance with two digits after the decimal point
    - Hint: Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate.
    - To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12. */

#include <stdio.h>

int main(void)
{

float loan, balance, interestRate, monthlyInterestRate, monthlyPayment, firstPayment, secondPayment, thirdPayment;  

printf("Enter the amount of loan: ");
scanf("%f", &loan );

printf("Enter interest rate: ");
scanf("%f", &interestRate);
printf("\n");                                     //monthly payment and interest rate are constant throughout the program!

printf("Enter monthly payment: ");
scanf("%f", &monthlyPayment);
printf("\n");

monthlyInterestRate = interestRate / 12.0;      // interest rate is divided by 12 months to calculate monthly
balance = loan;    // balance is the loan that the user has

balance = balance - monthlyPayment;
balance = balance + (balance * monthlyInterestRate);  
firstPayment = balance;
printf("Balance remaining after the first payment: %.2f\n", firstPayment);

balance = firstPayment - monthlyPayment; //recalculated decrease balance to fit updated balance for second payment
balance = balance + (balance * monthlyInterestRate);  
secondPayment = balance;
printf("Balance remaining after the second payment: %.2f\n", secondPayment);

balance = secondPayment - monthlyPayment;
balance = balance + (balance * monthlyInterestRate);  
thirdPayment = balance;
printf("Balance remaining after the third payment: %.2f\n", thirdPayment);


    return 0;
}
