/* Modify the broker.c program of Section 5.2 by making both of the following changes:
    (a) Ask for the user to enter the number of shares and the price per share, instead of the value of the trade
    (b) Add statements that compute the commission charged by a rival broker ($33 plus 3c per share for fewer than 2000 shares;
    $33 plus 2c per share for 2000 shares or more). Display the rival's commission as well as the commission charged by the original broker.

*/


#include <stdio.h>

int main(void)
{
    float shares, price, rival_commission, broker_commission, total_value;

    printf("Enter the number of shares: ");
    scanf("%f", &shares);
    printf("Enter the price per share: ");
    scanf("%f", &price);

    broker_commission = shares * price / 100;
    total_value = shares * price;

    if (shares < 2000.00f) {
        rival_commission = 33.00f + 0.03f * total_value;
    } else if (shares >= 2000.00f) {
        rival_commission = 33.00f + 0.02f * total_value;
    }

    printf("Commission charged by the broker: %.2f\n", broker_commission);
    printf("Commission charged by the rival: %.2f", rival_commission);


    return 0;
}
