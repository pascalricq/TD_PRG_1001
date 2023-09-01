



```ad-note
This assignement is provided as a Visual Studio Solution. Install Visual Studio Enterprise edition if available for you in Azure Education :
https://aka.ms/type3
Alternatively, you may install the Visual Studio Community Edition that is free. 
It can be found there : [Download Visual Studio Tools - Install Free for Windows, Mac, Linux (microsoft.com)](https://visualstudio.microsoft.com/downloads/) 
You should avoid preview edition.

In Visual Studio Installer, you may check that the "Development Desktop in C++" workload is selected.
```


# Exercise 1

Select Exo1 as the startup project by right clicking Exo1 and selecting "Set as Startup Project".
Complete the C code in main.c file. The instructions are given in comments.

The purpose of this exercise is to learn the syntax used for commentaries.

```c
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
// Between <summary> tags, give an explanation of the function purpose, i.e.: Program entry point
// Place the mouse cursor on the 'main' word and verify that a tooltip is displayed with the comment you wrote.


```

# Exercise 2

Select Exo2 as the startup project by right clicking Exo2 and selecting "Set as Startup Project".
Complete the C code in main.c file. The instructions are given in comments.

The purpose of this exercise is to understand the numeric expression evaluation.



```c
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

```

# Exercise 3

Select Exo3 as the startup project.
Complete the C code in main.c file and build the project exo3.

The purpose of this exercise is to understand how to display text and use variables.

```c
// This directive deactivates Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

/******************************************/
/*   TD PRG 1001   exo3                   */
/*   P. RICQ 2023                         */
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
	
```


# Exercise 4

The purpose of this exercise is to practice expression evaluation that contains hard assigned variables.

```c
// Write a program in C code that convert a temperature given in Fahrenheit degrees
// to a temperature given in Celsius degrees ( = Fahrenheit – 32) x 5/9),
// then in Kelvin degrees ( = Fahrenheit + 459,67) x 5/9
// Display all values on console screen.


int main() {


	return EXIT_SUCCESS;
}
```
# Exercise 5

The purpose of this exercise is to practice expression evaluation that contains variables that are assigned at run-time.

```c
/******************************************/
/*   TD PRG 1001   exo5                  */
/*   P. RICQ 2023                         */
/******************************************/



// Write a program in C code that convert a given temperature in Fahrenheit degrees
// to a temperature in Celsius degrees ( = Fahrenheit – 32) x 5/9),
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

	// 4 -
	// It is your turn :



	return EXIT_SUCCESS;
}

// About name for the variables :
	// it contains no special or accentuated chars, neither spaces
	// underscore '_' can be used 
	// it is not a reserved keyword
	// it do not start with number
	// it is case sensitive, uppercase and lowercase are considered as different characters.
	// it should be explicit
	// it should respect project or corporate policy for variables naming
```

# Exercise 6

The purpose of this exercise is to practice expression evaluation that contains variables that are assigned at run-time.

```c
// boolean values
// The way to say true or false rather than simply 1 or 0 is to use stdbool.h
// Anyway, all expression evaluated as 0 is considered as false, true if value different of 0

bool niceDayToday = true;

bool canBeDividedBy2 = false;

int numberOfDay = 13;

// We are using 'if' reserved keyword, to build a conditionnal statement..

// if (requires logical expression here) { if expression was true, instruction here are executed }
// 
// So, C will try to evaluate any expression as a logical expression when a logical expression is expected
// Let's try :

if (niceDayToday) {
	printf("\nI love when it's a nice day ");
}

if (numberOfDay % 2 == 0) {
	// % operator calculates the modulo, rest of euclidian division
	printf("\nThe number of day (%d) is even, means it can be divided by 2 while the rest of the division equals 0", numberOfDay);
}

if (!(numberOfDay % 2)) {
	printf("\nThe number of day is even");
}
if ( ((numberOfDay % 2) != 0 ) && (numberOfDay != 13) ) {
	printf("\nThe number of this day (%d) is odd but definitly not a friday the 13th ! ", numberOfDay);
}

// Tell John if the number of day is between 1-7 or 15-21, then it is his turn to do the housekeeping !
// Excepted if it is the 3rd, it's a off day for him.

// is a = 1 a true expression?? or is just an assignment 

// Takeaway : 
// Logical operators use two signs e.g. ||, &&
// also ==, != relationnal operator is used to test equality or difference between two numerical values
// comparison operator are >, <, <=, >=
// parenthesis ( ) are use to force evaluation
// Logical evaluation of an expression results in a logical value as true or false.
// Support for true and false is provided by stdbool.h
// By default, all values equal to 0 are evaluated as false, the others are evaluated as true.
// Expressions are evaluated from left to right
	
```

```ad-note
title: Push to GitHub !

Verify you can commit all the changes in your code and push them on the Github repository. If operations successed, you will see all the changes on GitHub using the web browser. 

```
