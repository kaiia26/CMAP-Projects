/*  - Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payment
    - Display each balance with two digits after the decimal point
    - Hint: Each month, the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate.
    - To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12. */

#include <stdio.h>

int main(void)
{

float loan, balance, increaseBalance, upd_increaseBalance2, upd_increaseBalance3,
decreaseBalance, upd_decreaseBalance2, upd_decreaseBalance3, updatedBalance, updatedBalance2, updatedBalance3, interestRate,
monthlyInterestRate, monthlyPayment, firstPayment, secondPayment, thirdPayment;  

printf("Enter the amount of loan: ");
scanf("%.2f", &loan );

printf("Enter interest rate: ");
scanf("%f", &interestRate);
printf("\n");                                     //monthly payment and interest rate are constant throughout the program

printf("Enter monthly payment: ");
scanf("%.2f", &monthlyPayment);
printf("\n");

monthlyInterestRate = interestRate / 12.0;      // interest rate is divided by 12 months to calculate monthly

balance = loan;    // balance is the loan that the user has
decreaseBalance = balance - monthlyPayment;   // balance is decreased each month by the user paying monthly payments
increaseBalance = balance * monthlyInterestRate;     // balance is increased each month by the monthly interest rate   

updatedBalance = balance - decreaseBalance;
updatedBalance = balance + increaseBalance;
firstPayment = updatedBalance;
printf("Balance remaining after the first payment: %.2f\n", firstPayment);

upd_decreaseBalance2 = firstPayment - monthlyPayment; //recalculated decrease balance to fit updated balance for second payment
upd_increaseBalance2 = firstPayment * monthlyInterestRate;  //recalculated increase balance to fit updated balance for second payment
updatedBalance2 = firstPayment - upd_decreaseBalance2; 
updatedBalance2 = firstPayment + upd_increaseBalance2;
secondPayment = updatedBalance2;
printf("Balance remaining after the second payment: %.2f\n", secondPayment);

upd_decreaseBalance3 = secondPayment - monthlyPayment;
upd_increaseBalance3 = secondPayment * monthlyInterestRate;
updatedBalance3 = secondPayment - upd_decreaseBalance3;
updatedBalance3 = secondPayment + upd_increaseBalance3;
thirdPayment = updatedBalance3;
printf("Balance remaining after the third payment: %.2f\n", thirdPayment);


    return 0;
}
