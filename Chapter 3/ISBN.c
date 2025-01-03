/* ISBNs contain 13 digits, arranged in 5 groups, such as 978-0-393-97950-3. The first group is currently 978 or 979. The group identifier
specifies the language or country of origin (for example, 0 and 1 are used in English-speaking countries). The publisher code identifies
the publisher. The item number is assigned by the publisher to identify a specific book (97950 is the code for this book). An ISBN ends with
a check digit that's used to verify the accuracy of the preceding digits. 

Write a program that breaks down an ISBN entered by the user */

#include <stdio.h>

int main(void) 
{

int GS1, group_identifier, pub_code, item_num, check_digit;

printf("Enter ISBN: ");
scanf("%3d-%d-%d-%d-%1d", &GS1, &group_identifier, &pub_code, &item_num, &check_digit);
printf("GS1 prefix: %3d ", GS1); // set number, always three digits long
printf("\n");
printf("Group identifier: %d ", group_identifier);
printf("\n");
printf("Publisher code: %d ", pub_code);
printf("\n");
printf("Item number: %d ", item_num);
printf("\n");
printf("Check digit: %1d", check_digit);  // set number, always a singular digit long


return 0;

}
