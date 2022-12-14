/*
We can also add an else clause to an if statement to provide code that will only be executed if the initial if condition is false.
Here’s a form of an if statement that includes an else clause:
if (condition) {
// Statement1 — do something
} else {
// Statement2 — do something else
}

    1. If condition is true, statement1 is executed. Then the program skips statement2 and executes any code statements following
       the if / else clause.
    2. If condition is false, statement1 is skipped and statement2 is executed. After statement2 completes, the program executes any
       code statements following the if / else clause.

    if (coin == 1) {
    printf("Heads\n");
    } else {
    printf("Tails\n");
    }

In the code above, if coin is equal to 1, the program outputs “Heads”; if it does not, then it outputs “Tails.”
Note: It’s either or — only one of them will execute!

1. Add an else statement that prints “Fail\n”.
2. Add a second if / else statement with the condition grade2 > 60 that prints “Pass\n” if true and “Fail\n” if otherwise.
Run the program again to see how the else clause gets skipped when the condition isn’t false! */

#include <stdio.h>

int main() {

  int grade1 = 59;
  int grade2 = 90;

  if (grade1 > 60) {
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }

  if (grade2 > 60) {
    printf("Pass\n");
  } else {
    printf("Fain\n");
  }

}


