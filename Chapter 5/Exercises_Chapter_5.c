/* The following program fragments illustrate the relational and equality operators. Show the output produced by each, assuming that i, j,
and k are int variables. */

// (a) i = 2; j = 3;
// k = i * j == 6;
// printf("%d", k);

// Calculation: i * j is 2 * 3 which equals 6, bc == has lower precedence than relational operators
// 6 == 6 which is true
// In binary, true is evaluated to 1
// Answer: it prints k is 1.

// (b) i = 5; j = 10; k = 1
// printf("%d", k > 1 < j);

// Calculation:  (k > 1) < j, since the > operators are left associative
// First tests if k is greater than 1, and then the 1 or 0 produced is compared to j
// (1 > 1) < 10; 1 is not greater than 1 so it produces 0 (false)
// 0 < 10; 0 is less than 10 so it produces 1 (true)
// Answer: it prints 1 

// (c) i = 3; j = 2; k = 1
// printf("%d", i < j == j < k)

// Calculation: (i < j) == (j < k) since == is lower precedence than ><
// True if (i < j) and (j < k) are both true or both false (both 0 or 1)
// (3 < 2) is false (0); (2 < 1) is false (0)
// so it evaluates to true (1)
// Answer: it prints 1 

// (d) i = 3; j = 4; k = 5;
// printf("%d", i % j + i < k);

// Calculation: (i % j + i) < k; since % is higher precedence than + and <, but + is higher than <
//  (3 % 4) = 0 * 4 = 3 - 0 = 3;
// 3 + 3 = 6
// 6 < 5; its false (0)
// prints 0



// 2. The following program fragments illustrate the logical operators. Show the output produced by each, assuming that i, j, and k are int
// variables. 

// (a) i = 10; j = 5;
// printf("%d", !i < j)

// Calculation: !i evaluates to false since i = 10 is true; !true is false or 0;
// 0 < 5 evaluates to true or 1
// Answer: prints out 1 

// (b) i = 2; j = 1;
// printf("%d", !!i + !j)

// Calculation: !i evaluates to false, but the additional ! negates the false, so !!i evaluates to true (1)
// !j evaluates to false(0)
// 1(true) + 0(false) = 1(true)
// Answer: prints out 1

// (c) i = 5; j = 0; k = -5;
// printf("%d", i && j || k);

// Calculation: (i && j) || k
// (5 && 0) evaluates to 0(false) since 5 and 0 aren't the same number
// 0 || -5 evaluates to 1(true) since either have nonzero value
// Answer: prints out 1

// (d) i = 1; j = 2; k = 3
// printf("%d", i < j || k)

// Calculation: (i < j) || k
// 1 < 2 evaluates to true(1)
// 1 || 3 evaluates to 1(true) since either have nonzero value
// Answer: prints out 1



// 3. The following program fragments illustrate the short-circuit behavior of logical expressions. Show the output produced by each, 
// assuming that i, j, and k are int variables

// (a) i = 3; j = 4; k = 5;
// printf("%d ", i < j || ++j < k);

// Calculation: (i < j) || (++j < k)
// (3 < 4) || (++j < k) ; (3 < 4) evaluates to true(1)
// ++j is not executed due to short-circuiting, since 3 < 4 is true it means the entire expression is true
// Answer: prints 1

// (b) i = 7; j = 8; k = 9;
// printf("%d ", i - 7 && j++ < k);
// printf("%d %d %d", i, j, k);

// Calculation: (i - 7) && (j++ < k)
// (7 - 7) || (j++ < k) ; 7 - 7 evaluates to 0 (false)
// j++ is not executed due to short-circuiting, since 7 - 7 is false it means the entire expression is false
// Answer: prints out 0 
// Answer: prints out 7 8 9

// (c) i = 7; j = 8; k = 9;
// printf("%d ", (i = j) || (j = k));
// printf("%d %d %d", i, j, k);

// Calculation: (i = j); i is assigned 8
// (j = k) is not evaluated due to short-circuiting, so j and k are unchanged
// Expression evaluates to 1(true)
// Answer: prints out 1
// Answer: prints out 8 8 9 

// (d) i = 1; j = 1; k = 1;
// printf("%d ", ++i || ++j && ++k);
// printf("%d %d %d", i, j, k);

// Calculation: (++i), i is incremented to 2
// (++j) && (++k) is not evaluated due to short-circuiting, so j and k are both unchanged
// Expression evaluates to 1(true) since i is an integer value
// Answer: prints out 1
// Answer: prints out 2 1 1 


// 4. Write a single expression whose value is either -1, 0, or +1, depending on whether i is less than, equal to, or greater than j,
// respectively.

#include <stdio.h>

int main(void) 
{
    int i, j;
    
    printf("%d", (i < j) ? -1 : (i > j) ? 1 : 0);

    return 0;

}



// 5. Is the following if statement legal?

#include <stdio.h>

int main(void)
{
    int n;

    if (n >= 1 <= 10) {
        printf("n is between 1 and 10");
    }

    return 0;
}

// If so, what does it do when n is equal to 0?

// Calculation: The expression is legal, but you read it as (n >= 1) <= 10. 
// When n is equal to 0 it prints out 0(false), since (0 >= 1) is not true.
// When the expression is simplified to (0 <= 10) is evaluated it prints out 1(true)
// Answer: The expression is true, it prints out 1
// It will always print "n is between 1 an 10" even when n is 0



// 6. Is the following if statement legal?

#include <stdio.h>

int main(void)
{
    int n;

    if (n == 1-10) {
        printf("n is between 1 and 10\n");
    }

    return 0;
}


// If so, what does it do when n is equal to 5?

// Calculation: The expression is legal, but it prints out nothing.
// Answer: (1-10) evaluates to -9; the expression is now n == -9
// If n is set to 5, 5 == -9 is false (0)
// Since the condition is false, the printf statement isn't executed


// 7. What does the following statement print if i has the value 17? What does print if i has the value -17?

// printf("%d\n", i >= 0 ? i : -i);

// Answer (if 17): (17 >= 0) is true, so it prints out i which is 17
// Answer (if -17): (-17 >= 0) is false, so it prints out -(-17), which simplifies to 17



// 8. The following if statement is unnecessarily complicated. Simplify it as much as possible
// (Hint: The entire statement can be replaced by a single assignment)

/*
#include <stdio.h>

int main(void)

int teenager, age;
{
    if (age >= 13) {
        if (age <= 19)
            teenager = true;
        else 
            teenager = false;
    else if (age < 13)
        teenager = false;




    return 0;
}

*/

// Answer: (age >= 13 && age <= 19) ? 1 : 0);












