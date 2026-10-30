// Day 1: Introduction to C & Basic Syntax

// ------------------------------------------------------------------------------------------------------------------------------------------

/*
what is C?
    -C is a general purpose programming language.
    - Developed by Dennis Ritchie in 1972.
    - it is a procedural programming language.
    - C is a compiled language
    - It is widely used in operating systems, embedded system, compilers, and system programming.

why learn C?
    -Understand how computers work.
    -Build strong programming fundamentals.
    -Learn memory management and pointers.
    -Develop problem-solving skills.
    -Build a foundation for data structures and algorithms

*/

// ------------------------------------------------------------------------------------------------------------------------------------------

/*

Feature of C
    -Simple and structured.
    -Fast execution.
    -Portable.
    -Supports pointers.
    -Rich set of operators.
    -Supports dynamic memory allocation.
    -Large standard library.

*/
// ------------------------------------------------------------------------------------------------------------------------------------------

// S tructure of C program

#include <stdio.h>
int main()
{
    printf("hello world!");
    return 0;
}

// output:
// hello world
/*
-  #include <stdio.h> : 	Includes the standard input/output library.
-  int main() :	Starting point of program execution
-  { } :	Defines the body of the function
-  printf()	: Displays output on the screen
-  return 0;  :	Indicates successful program completion



- C is case-sensitive.
- Most statements end with a semicolon ;.
- Code blocks use curly braces { }.
- Text must be enclosed in double quotes



*/
// ------------------------------------------------------------------------------------------------------------------------------------------



// My first program:

#include <stdio.h>

int main()
{
    printf("Hello, Dolly!");
    return 0;
}

// output:
// Hello, Dolly!

// ------------------------------------------------------------------------------------------------------------------------------------


/*

Comments in C:

comments are notes written inside a program . the complier ignore them.

        single line comment:
                -you can write onle line statement with // in the start
        multi-line comment:
                -you can write multi line comment insile /* -----*/


// ------------------------------------------------------------------------------------------------------------------------------------

/*

Escape Sequences:
Escape sequences are special characters used inside strings.


\n      :	New line
\t      :	Horizontal tab
\\      :	Backslash
\"      :	Double quote
\0      :	Null character

*/

// example:
#include <stdio.h>

int main()
{
    printf("Hello\nWorld");
    printf("\nC\tProgramming");

    return 0;
}

// output:
// Hello
// World
// C   programming


// ------------------------------------------------------------------------------------------------------------------------------------




// Basic output using printf():
// printf() display information on the screen.

#include <stdio.h>

int main()
{
    printf("My name is Dolly.\n");
    printf("I am learning C programming.\n");
    printf("I want to become an AI/ML Engineer.");

    return 0;
}

// output:
// My name is Dolly.
// I am learning C programming.
// I want to become an AI/ML Engineer.


