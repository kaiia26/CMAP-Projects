/* 1. Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables. */

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


