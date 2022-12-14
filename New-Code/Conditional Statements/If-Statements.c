/*
An if statement is used to test an expression for truth and execute some code based on it. Here’s a simple form of the if
statement:
if (condition) {
// Statement(s)
}
If the condition is true, then the statements within the if block are executed. These statements are any lines of code that would
otherwise be normally executed by the program. When the condition is false, the inside statements are skipped and the program
continues on.

if (flip == 1) {
printf("Heads\n");
}

The if keyword is followed by a set of parentheses (). Inside these parentheses, a condition is provided that evaluates to true
or false:
    If the condition evaluates to true, the code inside the curly braces {} executes.
    If the condition evaluates to false, the code doesn’t execute.
So in the code above, if flip is equal to 1, the program outputs “Heads”; if it does not, then nothing happens and the program
continues.

1. Write an if statement that checks if grade1 > 60 is true and prints “Pass\n” if it is.
2. Write another if statement that checks if grade2 < 60 is true and prints “Fail” if it is.    */

#include <stdio.h>

int main() {

  int grade1 = 90;
  int grade2 = 59;

  if (grade1 > 60) {
    printf("Pass\n"); }

  if (grade2 < 60) {
    printf("Fail\n");
  }
}


