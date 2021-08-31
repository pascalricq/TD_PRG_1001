// This directive deactivate Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/******************************************/
/*   TD PRG 1001   exo6                   */
/*   P. RICQ 2021                         */
/******************************************/

int main() {
	// boolean values
	// The way to say true or false rather than simply 1 or 0 is to use stdbool.h
	// Anyway, all expression evaluated as 0 is considered as false, true if value different of 0

	bool niceDayToday = true;

	bool canBeDividedBy2 = false;

	bool numberOfDay = 13;

	// ok, we are using 'if' reserved keyword, don't tell anyone..

	// if (requires logical expression here) { if expression was true, instruction here are executed }
	// 
	// So, C will try to evaluate any expression as a logical expression when a logical expression is expected
	// Let's try

	if (niceDayToday) {
		printf("\nI love when it's a nice day ");
	}

	if (numberOfDay % 2 == 0) {
		// % operator calculates the modulo, rest of euclidian division
		printf("\nThe number of day is even, means it can be divided by 2 while the rest of the division equals 0");
	}

	if (!(numberOfDay % 2)) {
		printf("\nThe number of day is even");
	}
	if ( ((numberOfDay % 2) != 0 ) && (numberOfDay != 13) ) {
		printf("\nThe number of this day is odd but definitly not a friday the 13th ! ");
	}

	// Tell John if the number of day is between 1-7 or 15-21, it is his turn to do the housekeeping


	// is a = 1 a true expression?? or is just an assignment 

}


