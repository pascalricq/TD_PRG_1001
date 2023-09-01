// This directive deactivates Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

/******************************************/
/*   TD PRG 1001   exo2                   */
/*   P. RICQ 2023                         */
/******************************************/

// Numeric expression evaluation

int main() {

	// 1 - use printf to display integral decimal value 10
	//     notice that the instruction is followed by a semicolon ;
	printf("\n%d", 10);
	// 2 - write code that calculate the sum of 10 and 20, where is the result ?!
	//     Add breakpoint on this line and use debugger to examine the corresponding machine code
	//     Menu Debug/Windows/Machin Code
	10 + 20;
	// 3 - use printf to calculate the sum of 10 + 20 and display the result in a single instruction
	printf("\n%d", 10 + 20);
	int a = 10;
	// 4 - display the result of 1024 multiplied by 1024

	// 5 - display the result of 10 divided by 2

	// 6 - display the result of 10 divided by 20, comment this result.

	// 7 - evaluate this expression and display the result 2 + 3 * 5

	// 8 - evaluate this expression and display the result (2 + 3) * 5

	// 9 - let's define a new constant for Pi
	//      notice F suffix for Pi that specify to used a single precision Float format for its value
	const float Pi = 3.14F;
	printf("\n%f", Pi);

	// 10 - let's try printing seven digits after decimal separator
	//      What do we notice about decimal value ?
	printf("\n%.7f", Pi);
	// 11 - let's redefine the constant Pi with double precision
	//      Is it possible to use the same name to redefine the value of Pi ? Why ?
	//      Notice the syntax used to control the number of digit that will be display
	const double Pi2 = 3.141592653589793;
	printf("\n%.11lf", Pi2);
	printf("\n%.13lf", Pi2);
	
	// 12 - Let's convert integral values into float value before performing division
	//      The result may be then render as a float value
	printf("\n%f", (float)10 / (float)20);
	// this conversion syntax is called a 'cast'

	// we also could have written this to force the numeric constants to be float numbers :

	printf("\n%f", 10.0 / 20.0);

	// Using the two methods, print the result of the following expression:  2,5 * 2 / 3
	// Which symbol must be used in the code as a decimal separator ?
	// What is the operator precedence ?
	// In which direction operands/operators will be associated, Right-Left or Left-Right ?
	// How could we force associativity ?

	// first method without cast
	
	// second method with cast
	
	// what will be the result of this ? why ? :
	printf("\n%f", 2.5 * (2 / 3));


	// Additional references:
	// https://en.cppreference.com/w/c/language/operator_precedence
	// for later comprehension :
	// https://docs.microsoft.com/fr-fr/cpp/build/ieee-floating-point-representation?view=msvc-160
	// https://docs.microsoft.com/fr-fr/cpp/build/why-floating-point-numbers-may-lose-precision?view=msvc-160
	return EXIT_SUCCESS;
}
