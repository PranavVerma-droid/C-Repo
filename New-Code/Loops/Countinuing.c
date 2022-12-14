/*
In a video game, a “Game Over” screen often allows you to “continue” from a previous save or checkpoint. Loops can do this
in much the same way using continue, the second keyword we’ll learn this lesson!

In a loop, if a continue is ever reached, it will immediately skip the rest of the statements inside the loop body and “continue”
into the next iteration.

For example, let’s look at the following syntax:

for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue;
    }
    printf("%d is odd\n", i);
}

Inside the for loop, we see an if statement checking if the current counter, i, is an even number by using the % operator. If i is
even, continue to the next iteration and skip the print statement below. If i is odd, print i and continue as normal.

Note: These keywords can still affect a loop even if they’re contained inside an if statement. This means a continue will always
advance to the next iteration even if it’s nested in multiple if / else statements! This goes for other loop keywords as well, like
break. If there are nested loops, a keyword will only interact with the most interior loop it is contained in.  */

//1. Use continue to make the while loop skip the print statement for when (i == 5).
//2. Convert the while loop to a for loop.
//   This way, you don’t have to worry about whether or not your counter will increment as normal when a continue is called.
//   A for loop will naturally increment the counter for you after any given iteration is completed.

#include <stdio.h>

int main() {

  int i = 0;

for (i = 0; i < 10; ++i) {
    // Figure out how to skip the print of 5 here
    if (i == 5) {
      continue;
    }
    printf("%d\n", i);
  }
}


