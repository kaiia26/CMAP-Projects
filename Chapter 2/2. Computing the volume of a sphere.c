/* Write a program that computes the volume of a sphere with a 10-meter radius, using the formula V = 4/3π r^3. Write the fraction
4/3 as 4.0f/3.0f.(Try writing it as 4/3. What happens?)(Hint: C doesn't have an exponentiation operator, so you'll need to
multiply r by itself three times to compute r^3.)*/

/* Modify the program so it prompts the user to enter the radius of a sphere*/

#include <stdio.h>

int main(void)
{

int volume, radius;

printf("Print out the desired radius: ");
scanf("%i", &radius);
volume = printf("Volume: %f%f%d%i%i%i", 4.0f / 3.0f * 3.14159f * radius * radius * radius);

return 0;
    
}

