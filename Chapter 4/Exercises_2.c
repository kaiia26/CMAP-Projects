// 10. Show the output produced by each of the following program fragments. Assume that i and j are int variables.

// (a) i = 6;
// j = i += i;
// printf("%d %d", i, j);

// i = 6
// i = i + 6; i = 6 + 6; i = 12
// j = 12
// Answer: i and j are both 12


// (b) i = 5;
// j = (i -= 2) + 1;
// printf("%d %d", i, j);

// i = 5
// j = (i = i - 2) + 1; (rewrite for clarity)
// j = (i = 5 - 2) + 1; i = 3
// j = 3 + 1; j = 4
// Answer: i is 3 and j is 4

// (c) i = 7;
// j = 6 + (i = 2.5);
// printf("%d %d", i, j);

// i = 7
// j = 6 + 2 (i is reassigned to 2.5, but since i is an int, it is trunctuated and is left with 2)
// j = 8
// Answer: i is 2 and j is 8


// (d) i = 2; j = 8;
// j = (i = 6) + (j = 3);
// printf("%d %d", i, j);

// both j and i are reassigned values of 3 and 6, respectively
// since = assignment operator is right associative, we begin the operations from the right-hand side
// j = 6 + 3; j = 9
// Answer: i is 6 and j is 9



// 11. Show the output produced by each of the following program fragments. Assume that i, j, and k are int variables.

// (a) i = 1;
// printf("%d ", i++ - 1);
// printf("%d", i);

// Answer 1: prints 0 (1 - 1 = 0)
// Answer 2: prints 0

// (b) i = 10; j = 5;
// printf("%d ", i++ - ++j);
// printf("%d %d", i, j);

// Answer 1: prints 4 (10 - 6 = 4)
// Answer 2: i is 11, j is 6

// (c) i = 7; j = 8;
// printf("%d ", i++ - --j);
// printf("%d %d", i, j);

// Answer 1: prints out 0 (7 - 7 = 0)
// Answer 2: i is 8 j is 7

// (d) i = 3; j = 4; k = 5;
// printf("%d ", i++ - j++ + --k);
// printf("%d %d %d", i, j, k);

// Answer 1: prints out 5 (3 - 4 + 4 = 3) (left associativity)
// Answer 2: i is 4, j is 5, and k is 4





