/* Modify the program of Polynomial.c so that the polynomial is evaluated using the following formula:
    
    ((((3x + 2)x-5)x-1)x+7)x-6

*/

#include <stdio.h>

int main(void) 
{
    int x, p1, p2, p3, p4, p5, result;
    printf("Enter a value for x: ");
    scanf("%i", &x);

 /*p starts for parts of the problem, we break it down into smaller pieces; there are 5 parts in total*/
    p1 = 3 * x + 2;
    p2 = p1 * x - 5;
    p3 = p2 * x - 1;
    p4 = p3 * x + 7;
    p5 = p4 * x - 6;  /*Since p5 is the accumulation of previous calculations, it is the answer*/
    
    result = p5;     /*Relabeled as result for proper comprehension*/

    printf("Answer: %i", result);

    return 0;

}
