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




