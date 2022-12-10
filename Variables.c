#include <stdio.h>
//int myNum = 15;
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
}