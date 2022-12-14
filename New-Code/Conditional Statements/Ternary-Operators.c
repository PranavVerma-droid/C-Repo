/*
We’ve learned that the if / else statement is versatile. It’s so versatile that C actually has a built-in special way to shortcut
an if / else statement into one line. And you don’t even need to use the words “if” and “else!”

This shortcut is called a ternary operator. It’s most applicably used when an if / else statement returns a value, but can also
work otherwise. For instance, deciding what to output in a print statement. A ternary operator looks like this:

condition ? do something : do something else;

The above example is exactly the same as:

if (condition) {
    // Do something
} else {
    // Do something else
}

This operator acts exactly like an if / else statement! For example, let’s take a look at the following statement:

if (a < b) {
    min = a;
} else {
    min = b;
}

The above if / else statement compares a and b and stores the smaller of the two inside the min variable. Let’s rewrite this as a
ternary operator:

min = a < b ? a : b;

The ? marks the check for the condition, as if asking it as a question. If a is the smaller number, the condition passes with true,
which executes the left-hand side of the : and stores a into min. If the condition was false, then the right-hand side of the :
executes, which stores b into min instead.

1. Run the program to see a ternary operator in action!
   You’ll see two numbers in the output! The first demonstrates how the ternary operator can return a value, just like the example
   above. The second demonstrates how the ternary operator can be used without returning a value.   */

#include <stdio.h>

int main() {

  int a = 10;
  int b = 5;
  int min;

  // Print out the smaller number with return
  min = a < b ? a : b;
  printf("%d\n", min);

  // Print out the smaller number without return
  a < b ? printf("%d\n", a) : printf("%d\n", b);
}


