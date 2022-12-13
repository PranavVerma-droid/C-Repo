#include <stdio.h>
/*to output the value of an int variable, you must use the format specifier %d or %i 
surrounded by double quotes, inside the printf() function
To print other types, use %c for char and %f for float*/
int main(){
int myNum = 5;             // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter); 
printf("My number is %d and my letter is %c", myNum, myLetter);//Combination of both

//Adding Variables Together
int x = 5;
int y = 6;
int sum = x + y;
printf("%d", sum);

//Declaration of Multiple-Variables
int a = 5, b = 6, c = 50;
printf("%d", a + b + c); 

//We can also assign the same value to multiple variables at the same time:
a = b = c = 70;
printf("%d", a + b + c);

/*The general rules for naming variables are:

    1. Names can contain letters, digits and underscores
    2. Names must begin with a letter or an underscore (_)
    3. Names are case sensitive (myVar and myvar are different variables)
    4. Names cannot contain whitespaces or special characters like !, #, %, etc.
    5. Reserved words (such as int) cannot be used as names*/

}