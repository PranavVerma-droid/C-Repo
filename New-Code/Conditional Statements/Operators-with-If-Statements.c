/*
For example, we can do something like:
if (grade >= 60) {
// Do something
}

In much the same fashion, we could’ve used a <=, or !=, or even ==. These relational operators naturally result in true or false
expressions, which make them perfect for conditionals!
However, sometimes we need to write multiple conditions in one conditional statement. In a past lesson, we learned about logical
operators. We can use these operators here as well!
Let’s recap the logical operators:

    1. && AND
    2. || OR
    3. !  NOT

When placed in a conditional statement, logical operators work together to produce one true or false output across multiple
conditions. For example:
if (a > 0 && b > 0) {
printf("Positive\n");
}
The above conditional checks if both conditions are true, and if they both are, the if statement passes. If either a or b was a
negative number, the if statement would be false.

1. Change the logical operator in the conditional statement from a > 0 && b > 0 to a > 0 || b > 0.
2. Now add another if statement that checks if both a > 0 and !(b > 0) are true and prints “Positive too” if they are. */

#include <stdio.h>

int main() {

  int a = 10;
  int b = -5;

  if (a > 0 || b > 0) {
    printf("Positive\n");
  }

  if (a > 0 && !(b > 0)) {
    printf("Positive too\n");

  }
}
