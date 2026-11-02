// Day 2: Variables, Data Types, Constants, Input/Output and Type Conversion

// ------------------------------------------------------------------------------------------------------------------------------------------

// Variable in C
// a variable is a named memory location used to store data that can be accessed and modified during program execution.
int age =21;
/*
here:
    int → data type
    age → variable name
    21 → value
    = → assignment operator
*/
// example:
#include <stdio.h>
int main(){
    int age =21;
    printf("My age is %d", age);
    return 0;
    
}

// output:
// My age is 21

// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Declaration, initialization and assignment

// declaration: creating a variable

int age;

// initialization: Given a variable its first value.


int age=21;

// assignment: giving or changing a value after declaration
int age;
age=21;
age=22;


// example:

#include <stdio.h>

int main() {
    int number;      // Declaration

    number = 10;     // Assignment
    number = 20;     // Updating the value

    printf("%d", number);

    return 0;
}

// 20

// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


/*

Rules for naming variables
1. A variable name can contain letters, digits and underscores.
2. It cannot begin with a digit.
3. Spaces are not allowed.
4. C keywords cannot be used as variable names.
5. Variable names are case-sensitive.

valid names:                                    invalid name:
age                                                 1age
student_marks                                       student marks
number1                                             float
_total                                              my-name

age ,Age, and AGE are three different identifiers in C

*/


// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// Data Types in C
// A data type tells the compiler what kind of value a variable will store.


int age = 21;
float price = 99.50;
char grade = 'A';

/*each variable store a differnt type of value.

Basic data types
Data type:	        Stores:	                                Example:
int 	        Whole numbers	                            int age = 21;
float	        Decimal numbers	                            float price = 10.5;
double	        Decimal numbers with more precision	        double pi = 3.141592;
char	        A single character	                        char grade = 'A';

*/

#include <stdio.h>

int main() {
    int age = 21;
    float marks = 85.5;
    double pi = 3.1415926535;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    printf("PI: %.6lf\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}

// Age: 21
// Marks: 85.50
// PI: 3.141593
// Grade: A


/*
Other integer data types
C also provides different integer types.

short int   	Short integer range
int         	Standard integer
long int    	Larger integer range
long long int	Very large integer range
unsigned int	Non-negative integer range

The exact sizes and ranges depend on the implementation.

*/

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------


// Find the size of a data type using sizeof
// The sizeof operator tells us how much memory a data type or variable occupies, in bytes.

#include <stdio.h>

int main() {
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu byte\n", sizeof(char));

    return 0;
}

// int: 4 bytes
// float: 4 bytes
// double: 8 bytes
// char: 1 byte


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Constants in C

// A constant is a value that should not be changed during program execution.
// There are two common ways to define constants.

// A. using const

// example:

#include <stdio.h>

int main() {
    const float PI = 3.14;

    printf("PI = %.2f", PI);

    return 0;
}

// You cannot assign a new value to PI after its initialization.

// B. using #define

// example:

#include <stdio.h>

#define PI 3.14

int main() {
    float radius = 5;
    float area = PI * radius * radius;

    printf("Area = %.2f", area);

    return 0;
}

/*

Difference between const and #define
const	                                                                            #define
Declares a read-only object                         	Defines a preprocessor macro
Has a data type	                                        Does not declare a typed variable
Follows normal scope rules	                            Macro is processed by the preprocessor
Example: const int x = 10;	                            Example: #define X 10

*/

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Input and Output in C

//  using printf()
// the printf() function display information on the _MINGW32_SOURCE_EXTENDED
//syntax :
    // prinf("message");

#include <stdio.h>

int main(){
    printf("Welcome to c programming!");
    return 0;
}

// output:
// Welcome to c programming!

// you can also display variables:

#include <stdio.h>

int main(){
    int age=20;
    printf("age= %d",age);
    return 0;
}

// output:
// age= 20



// Input using scanf()
// The scanf() function accepts input from the user
//syntax :
        // scanf("format_specifier", &variable);

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is %d", age);

    return 0;
}

// output:
// Enter your age: 20
// Your age is 20


// why di we use & in scanf?
// the & operator gives memory of the variable.
// scamf() needs that address so it knowns where to dtore the entered value.

// for example:
// int number;
// scanf("%d", &number);

// here, &number provides the address of number.

// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Format specifiers
// Format specifiers tell printf() and scanf() what kind of data is being handled

// Format specifier    	Data type	        Example
// %d	                    int	                int a;
// %f	                    float	            float x;
// %lf	                double in scanf()	    double x;
// %c              	     char	             char ch;
// %s	                Character string	char name[30];
// %u	                 unsigned int    	unsigned int n;
// %ld	                  long int	        long int n;
// %lld	            long long int	       long long int n;


// For printf(), %f is used to print a float or double.
// For scanf(), %f is used for float, while %lf is used for double

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d", a + b);

    return 0;
}

// output:
// Enter two numbers: 10 20
// Sum = 30

// taking character input:
#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Your grade is %c", grade);

    return 0;
}

// output:
// Enter your grade: A
// Your grade is A


//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Type conversion in C

// type conversion mean converting a value from one data type to another.
// there are two main types.
        // implicit tyoe conversion
        //explicit type conversion

// A. implicit type conversion:
// the complier automatically converts one data type into another.

// example:

#include <stdio.h>
int main(){
    int number =10;
    float result =number;
    print("%.2f",result);
    return 0;
}

// output:
// 10.00

// here, the integer value 10 is automatically converted to a floating - point value.

//B. Explicit typw conversion (type casting)
// the programmer manualy converts a value using a cast.

// syntax:
        // (data_type) expression

#include <stdio.h>

int main() {
    int a = 5;
    int b = 2;

    float result = (float)a / b;

    printf("%.2f", result);

    return 0;
}

// output:
// 2.50

// without type casting:
#include <stdio.h>

int main() {
    int a=5;
    int b= 2;
    printf("%d",a/b) ;
    return 0;
}

// output:
// 2
#include <stdio.h>
int main(){
    
    return 0;
}
// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
            // practice programs:
// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Add two numbers
#include <stdio.h>
int main(){
    int a ,b ;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("sum: %d",a+b);
    return 0;
}

// output:
// Enter two number: 5 20
// sum: 25

// --------------------------------------------------------------------------------------------------------------------------------------------------

// Calculate rectangle area

#include <stdio.h>
int main(){ 
    float length , width;
    printf("enter the lenght:");
    scanf("%f",&length);  
    printf("enter the width:");
    scanf("%f",&width) ;
    print6f("area = %.3f",length*width);

    return 0;
}


// output:
// enter the lenght:6.89 
// enter the width:7.97
// area = 54.913

// ------------------------------------------------------------------------------------------------------------------------------------------