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


