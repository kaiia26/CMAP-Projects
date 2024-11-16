/* 

Key: _ indicates spaces!

 What output do the following calls of printf produce?

1. printf("%6d, %4d", 86, 1040); 

- Answer: ____86      # 4 spaces and 2 characters = 6
- Answer: 1040        # 4 characters, no spaces

*/

/*
2.  Write calls of printf that display a float variable x in the following formats
a). Exponential notation; left-justified in a field of size 8; one digit after the decimal point.

 - Answer: printf("%-8.1e", e);

b) Exponential notation; right-justified in a field of size 10; six digits after the decimal point.

 - Answer: printf("%10.6e", e);

c) Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point.
 - Answer: printf("%-8.3f", f)

d) Fixed decimal notation: right-justified in a field of size 6; no digits after the decimal point.
- Answer: printf("%6.0f", f)

*/

/*
3. For each of the following pairs of scanf format strings, indicate whether or not the two strings are equivalent. If they're not, show how
   they can be distinguished.
   
   (a)  "%d"    vs.     " %d"  // Answer: They are equivalent because scanf ignores leading whitespace characters when reading input.

   (b) "%d-%d-%d"   vs.     "%d -%d -%d"    // Answer: They are not the same because "%d -%d -%d" expects spaces around the hyphens.

   (c) "%f"    vs.      "%f "   // Answer: They are the same because scanf ignores leading whitespace characters when reading input.

   (d) "%f,%f"  vs.     "%f, %f"    // Answer: They are not the same because "%f,%f" expects the input to have no spaces around the comma,
                                    // While "%f, %f" does expect the input to have spaces around the comma

   
   /*
   4. Suppose that we call scanf as follows:
         scanf("%d%f%d", &i, &x, &j);

         If the user enters
         10.3  5  6

         what will be the values of i, x, and j after the call? (Assume that x and j are float variables and i is an int variable)

      Conversion specification: %d. scanf reads the characters 10 and . and since integers can't contain a decimal point, 
      scanf stores 10 into  i and puts the . character back.

      Conversion specification: %f. scanf then reads the characters . and 3. Scanf stores 0.3 into x and puts 5 6 back.

      Conversion specification: %d. scanf then skips any leading whitespace, reads the characters 5 6, and stores 5 as an integer in j.
      The remaining input is 6, which isn't read.

   */

  /* 
  5. Suppose that we call scanf as follows:
      scanf("%f%d%f", &x, &i, &y);

      If the user enters
      12.3  45.6  789

      what will be the values of x, i, and y after the call? (Assume that x and y are float variables and i is an int variable)

      Conversion specification: %f. scanf reads the characters 12, . , and 3. Since 12.3 is a floating-point number, it stores it into x.

      Conversion specification: %d. scanf reads the characters 45 and . and since integers can't contain decimal points, scanf stores 45 into
      i and puts . back.

       Conversion specification: %f. scanf reads the characters . and 6. Since 0.6 is a floating-point number, it stores 0.6 into y.
       The remaining input is 789, which isn't read.

      
   /* 
   6. Show how to modify the addfrac.c program of Section 3.2 so that the user is allowed to enter fractions that contain spaces before
      and after each / character 

   */
  
  
  
  
  
  
  
  
  
  
  
  */
