#include <stdio.h>
#include <stdbool.h> //Bool Library

int main() {
//A boolean variable is declared with the bool keyword and can only take the values true or false:

// Create boolean variables
bool a = true;
bool b = false;

/*Boolean values are returned as integers:

    1 represents true
    0 represents false

We must use the %d format specifier to print a boolean value:*/

// Return boolean values
printf("%d", a);   // Returns 1 (true)
printf("%d", b);        // Returns 0 (false) 

//We can use a comparison operator, such as the greater than (>) operator, to compare two values:

printf("%d", 10 > 9);  // Returns 1 (true) because 10 is greater than 9 

//We can also compare two variables:
int x = 10;
int y = 9;

printf("%d", x > y); 
//We can even use == operator to get the output:
printf("%d", 10 == 10);   // Returns 1 (true), because 10 is equal to 10
printf("%d", 10 == 15);   // Returns 0 (false), because 10 is not equal to 15
printf("%d", 5.5 == 55);  // Returns 0 (false) because 5.5 is not equal to 55
printf("%d", 3.8 == 3.8); // Returns 1 (true) because 3.8 is equal to 3.8 

//We can also intigerate this w/ if statements:

int myAge = 25;
int votingAge = 18;

if (myAge >= votingAge) {
  printf("Old enough to vote!");
} else {
  printf("Not old enough to vote.");
} 

}