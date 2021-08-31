// This directive deactivate Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

/******************************************/
/*   TD PRG 1001   exo3                   */
/*   P. RICQ 2021                         */
/******************************************/

// Displaying text and using variables

int main() {

	// printf can be basically used to display an alpha-numeric string like "Hello !"
	printf("Hello !");
	// We can also use a format string to mix different kind of informations in a single sentence
	// %s refers to the text, and %d refers to the decimal value
	printf("\n%s %d", "Mysecret value is", 10);
	// notice the string is quoted with "..." but not the 10 numeric value

	// 1 - Use printf to display the following : Sum of 10 and 20 is equal to 30 

	printf("\n%s %d", "The sum of 10 and 20 is equal to ", 10+20);

	// 2 - In the previous exercice, we would like not to be obliged to use 10 and 20 in the message !
	//     We would prefer being able to reuse or to change the two values anywhere anywhen.

	// Open your eyes ! we needs to create some VARIABLES
	// Variables are like named box.
	// A variable owns a name and a keyword that specifies a data type.
	// It is used to store and manipulate a value that represents something. 
	// The variable can be modify be assigning it a new value.
	// It allows using a name for a value instead of the value itself
	// let's try
	int x;
	int y;

	x = 10;
	y = 20;
	
	printf("Sum of %d and %d is equal to %d", x, y, x + y);

	// Print the product of 10 and 20 :


	// 3 - x and y can be modified 
	// no need to declare them again, just need to assign new value or modify actual value :
	// The symbol that can be modified is situated on the LEFT side of the equal sign.
	// The assigned value is on the right.

	x = 100;

	// Print the product of 100 and 20 :


	// 4 - variable value may be increased by 1 , it's called 'incrementation"

	x = x + 1;

	// increment 'y' two times

	// 5 - shortcut for incrementation

	x += 1;
	// or
	x++;
	// or
	++x;

	// ++x preincrementation, value is used after adding 1.
	// x++ postincrementation, value is use before, its usage may be discourage for performance issues in some contexts.

	// Assign y with value 200

	// increment y

	// print the sum of x and y

	// create a new variable named 'z'

	// create a new variable named 'sum3D' that received the sum of x, y and z. Does it work ? Why ?

	// Assign z integer value 300.

	// assign 'sum3D' with the sum of x, y and z.

	// print the resultat in a verbose manner


	// Conclusion : In C, variables must always being assigned a value before expression evaluation

	
	// 6 - let's declare an alphanumeric text this way
	char messageOfTheDay[] = "Ouf ! what a day !";

		// print this message 
		

// Additional references:
	return EXIT_SUCCESS;
}
