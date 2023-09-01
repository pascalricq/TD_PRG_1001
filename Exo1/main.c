// This directive deactivates Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

/******************************************/
/*   TD PRG 1001   exo1                   */
/*   P. RICQ 2023                         */
/******************************************/



int main() {

	// Comment some text :
	// The two slashes are use to create a commentary til the end of one line
	/* A block of text can be commented this way :
	 starting with /* and
	 finishing with the same characters in the reverse order, like this :
	*/

	// 1 - Comment this unique line 
	printf("\n Welcome to JUNIA Isen !\n");


	// 2 - Display this message on a new line of the console and force cursor to go to the begining of a new line
	// "Hello"

	// 3 - Comment this three line of code :
	printf("ligne 1\n");
	printf("ligne 2\n");
	printf("ligne 3\n");

	// 4 - Comment this three lines of code using keyboard shortcut
	//	TIP: Go to Edit/Advanced menu of Visual Studio
	printf("ligne 4\n");
	printf("ligne 5\n");
	printf("ligne 6\n");

	// 5 - Use keyboard Shortcut to uncomment the three previous lines


	// 6 - Use template for creating a function commentary
	// TIP: Type /// on the empty line before the main function declaration
	// Between <summary> tags, give an explanation of the function purpose, e.g.: Program entry point
	// Place the mouse cursor on the 'main' word and verify that a tooltip is displayed with the comment you wrote.
	
	// 7- Test the program by pressing CTRL+F5
	// That's All ! 
	return EXIT_SUCCESS;
}
