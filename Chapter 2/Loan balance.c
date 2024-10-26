/*  - Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payment
    - Display each balance with two digits after the decimal point
    - Hint: Each month, the balance is decreased by the amount of the payment, butincreased by the balance times the monthly interest rate.
    - To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12. */

#include <stdio.h>

int main(void)
{

float loan, balance, interestRate, monthlyInterestRate, monthlyPayment, firstPayment, secondPayment, thirdPayment;  

printf("Enter the amount of loan: ");
scanf("%f", &loan );

printf("Enter interest rate: ");
scanf("%f", &interestRate);                                 //monthly payment and interest rate are constant throughout the program!

printf("Enter monthly payment: ");
scanf("%f", &monthlyPayment);
printf("\n");

monthlyInterestRate = interestRate / 12.0;      // interest rate is divided by 12 months to calculate monthly
balance = loan;    // balance is the loan that the user has

balance = balance + (balance * monthlyInterestRate); 
balance = balance - monthlyPayment; 
firstPayment = balance;
printf("Balance remaining after the first payment: %.2f\n", firstPayment);

balance = firstPayment + (firstPayment * monthlyInterestRate);  
balance = firstPayment - monthlyPayment; 
secondPayment = balance;
printf("Balance remaining after the second payment: %.2f\n", secondPayment);

balance = secondPayment + (secondPayment * monthlyInterestRate);  
balance = secondPayment - monthlyPayment;
thirdPayment = balance;
printf("Balance remaining after the third payment: %.2f\n", thirdPayment);


    return 0;
}
