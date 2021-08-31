// This directive deactivate Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


/******************************************/
/*   TD PRG 1001   exo5                  */
/*   P. RICQ 2021                         */
/******************************************/



// Write a program in C code that convert a temperature given in Fahrenheit degrees
// to a temperature given in Celsius degrees ( = Fahrenheit – 32) x 5/9),
// then in Kelvin degrees ( = Fahrenheit + 459,67) x 5/9
// Display all values on console screen.


// The value will this time be read from keyboard after asking user to enter a value
// The value will not be checked for correctness.




int main() {

	// How to read and store a value
	// 1 - declare a variable to store a numeric answer
	int count = 0;
	// 2 - ask for value whith a message on console
	printf("\nHi guy, give me five please ! ");
	// 3 - wait the user to strike a number on keyboard
	int ret = 0;
	ret  = scanf("%d", &count);

	// notice "%d" format string doesn't contains anything else than %d filter
	// &count use special & prefix ...   it's darkside of C coding, ask teacher for explanations.

	printf("In fact you gave me %d man, ok ok", count); // don't use & here !




	return EXIT_SUCCESS;
}