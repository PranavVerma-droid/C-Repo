/*
Now that we know how if, else if, and else work, we can write programs that have multiple outcomes. Programs with multiple
outcomes are so common that C provides a special statement for it — the switch statement!
A switch statement provides an alternate syntax that is easier to read and write. However, you are going to find these less
frequently than if, else if, and elses in the wild.
A switch statement looks like this:
switch (grade) {
case 9:
    printf("Freshman\n");
    break;
case 10:
    printf("Sophomore\n");
    break;
case 11:
    printf("Junior\n");
    break;
case 12:
    printf("Senior\n");
    break;
default:
    printf("Invalid\n");
    break;
}

The switch keyword initiates the statement and is followed by (), which contains the value that each case will compare. In the
example, the value or expression of the switch statement is grade. One restriction on this expression is that it must evaluate to an
integral type (int, char, short, long, long long, or enum).
Inside the block, {}, there are multiple cases. The case keyword checks if the expression matches the specified value that comes
after it. The value following the first case is 9. If the value of grade is equal to 9, then the code that follows the : would run.
The break keyword tells the computer to exit the block and not execute any more code or check any other cases inside the code block.
At the end of each switch statement, there is a default statement. If none of the cases are true, then the code in the default
statement will run. It’s essentially the else part. In the code above, suppose grade is equal to 10, then the output would be
“Sophomore”.
Note: Without the break keyword at the end of each case, the program would execute the code for the first matching case and all
subsequent cases, including the default code. This behavior is different from if / else conditional statements which execute only
one block of code.

1. Here we have a switch statement!
    Let’s add 3 more cases right before default:
    case 7 that outputs “Squirtle”
    case 8 that outputs “Wartortle”
    case 9 that outputs “Blastoise”
2. Remove break; from case 7.
   What do you think will happen when you run it? */

#include <stdio.h>

int main() {

  int number = 7;

  switch(number) {
    case 1:
      printf("Bulbasaur\n");
      break;
    case 2:
      printf("Ivysaur\n");
      break;
    case 3:
      printf("Venusaur\n");
      break;
    case 4:
      printf("Charmander\n");
      break;
    case 5:
      printf("Charmeleon\n");
      break;
    case 6:
      printf("Charizard\n");
      break;
    case 7:
      printf("Squirtle\n");
      break;
    case 8:
      printf("Wartortle\n");
      break;
    case 9:
      printf("Blastoise\n");
      break;
    default:
      printf("Unknown\n");
      break;
  }
}


