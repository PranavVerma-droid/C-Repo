/*
You haven’t learned about statements that check on and respond to true/false (known as boolean) values yet,
but since we are talking about arithmetic symbols we wanted to give you a primer with the symbols used for
these checks.
You can check if two values are equal == (notice there are double =s to check for equivalency rather than the
single symbol used for assignment), not equal !=, greater than >, greater than or equal >=, less than <, and
less than or equal <=.
As an example, if you wanted to perform a segment of code if a had the same value as b, you could write it as:

int a = 3;
int b = 3;
if (a == b) {
    a++;
}
Notice in this code that at the end, a would be 4.

1. The code block is ready for your new knowledge to fix this bad code. Insert the missing symbol(s) in the if
statement so that the logic inside the check runs and the output is printed.    */

#include <stdio.h>

int main() {

  int x = 5;
  int y = 42;

  if (x <= y) {
   printf("Congratulations on setting up a comparison correctly!");
  }

}
