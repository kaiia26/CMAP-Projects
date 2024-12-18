// 1. Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables. 

// (a). i = 5; j = 3;
// printf("%d %d", i / j, i % j);

// Answer: 5 / 3 = 1 (result is trunctuated)
// Answer: 5 % 3 = 3 * 1 = 3 ; 5 - 3 = 2

// (b). i = 2; j = 3;
// printf("%d, (i + 10) % j");

// Answer: (2 + 10) % 3 = 12 % 3; 12 % 3 = 0 (no remainder)

// (c). i = 7; j = 8; k = 9;
// printf("%d", (i + 10) % k / j)

// Answer = (7 + 10) % 9 / 8; 17 % 9 / 8 (left associativity); 17 % 9 = 9 * 1 = 17 - 9 = 8; 8 / 8 = 1

// (d). i = 1; j = 2; k = 3;
// printf("%d", (i + 5) % (j + 2) / k);

// Answer: (1 + 5) % (2 + 2) / 3; 6 % 4 / 3 (left associativity); 6 % 4 = 1 * 4 = 6 - 4 = 2; 2 / 3 = 0 (result is trunctuated towards zero)



// 2. If i and j are positive integers, does (-i) /j always have the same value as -(i/j)? Justify your answer.
// Answer: (-i) /j does not always have the same value as -(i/j) because if either operand is negative, 
// the result can be rounded either up or down. (For example, the value of -9 / 7 could be either -1 or -2).




// 3. What is the value of each of the following expressions in C89? (Give all the possible values if an expression may have more than one)

// (a) 8 / 5 = 1
// (b) -8 / 5 = -1 OR -2
// (c) 8 / -5 = -1 OR -2
// (d) -8 / -5 = 1 OR 2




// 4. Repeat Exercise 3 for C99

// (a) 8 / 5 = 1
// (b) -8 / 5 = -1
// (c) 8 / -5 = -1
// (d) -8 / -5 = 1



// 5. What is the value of each of the following expressions in C89? (Give all the possible values if an expression may have more than one)

// (a) 8 % 5 = 1 * 5 = 8 - 5 = 3  >> only 3
// (b) -8 % 5 = -8 - (5 * -1) = -8 + 5 = -3; OR; -8 - (5 * -2) = -8 - (-10) = -8 + 10 = 2  >> either -3 or 2
// (c) 8 % -5 = 8 - (-5 * -1) = 8 - 5 = 3; OR; 8 - (-5 * -2) = 8 - 10 = -8   >> either 3 or -8
// (d) -8 % -5 = -8 - (-5 * 1) = -8 + 5 = -3; OR; -8 -(-5 * 2) = -8 - (-10) = -8 + 10 = 2   >> either -3 or 2

// 6. Repeat Exercise 5 for C99

// (a) 8 % 5 = 2
// (b) -8 % 5 = -3        >> value of i % j has the same sign as i
// (c) 8 % -5 = 3
// (d) -8 % -5 = -3



// 7. The algorithm for computing the UPC check digit ends with the following steps: 
// Subtract 1 from the total
// Compute the remainder when the adjusted total is divided by 10
// Subtract the remainder from 9

// It's tempting to try to simplify the algorithm using these steps instead:
// Compute the remainder when the total is divided by 10.
// Subtract the remainder from 10

// Why doesn't this technique work?

// Answer: This technique doesn't work because you first have to subtract 1 from the total to get the adjusted total. You can only calculate
// the check digit correctly by performing the step by getting the adjusted total and then subtracting the adjusted total by the remainder.
// If you use only the total, it will incorrectly calculate the check digit by being 1 more than the correct result.



// 8. Would the upc.c program still work if the expression 9 - ((total -  1) % 10) were replaced by (10 - (total % 10)) % 10?

# include <stdio.h> 

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
    first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);
    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5 );
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;

}


// Yes, the upc.c program yields the same result. I tested it with the digits 0 51500 24128 and had to calculate the check digit. 
// First, I performed the original expression 9 - ((total -  1) % 10) which yielded the result of 8. I also did the expression
// (10 - (total % 10)) % 10 which yielded the same result.
// Explanation 1: 52 % 10 = 5 * 10 = 50 - 2 = 2; 2 % 10 = 2; 10 - 2 = 8. (Using the expression (10 - (total % 10)) % 10)
// Explanation 2: 52 - 1 = 51; 51 % 10 = 5 * 10 = 51 - 50 = 1; 9 - 1 = 8 (Using the expression 9 - ((total -  1) % 10))





