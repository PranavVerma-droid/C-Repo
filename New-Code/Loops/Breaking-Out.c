/*
When working with loops, it’s important to know a few special keywords that can affect how a loop runs. Let’s look at a
quick example to introduce the first special keyword!
Do you remember the while loop from exercise 3?

while (guess != 8 && tries < 50) {
    printf("Wrong guess, try again: ");
    scanf("%d", &guess);
    tries++;
}

The loop runs until 8 is guessed or 50 attempts have been made to guess the secret number. This means the loop will stop running as soon as one of those conditions is met. There is another way to write this, but using a special keyword. See if you can spot it!

while (tries < 50) {
    scanf("%d", &guess);
    if (guess == 8) {
        break;
    }
    printf("Wrong guess, try again: ");
    tries++;
}

The keyword break allows us to, quite literally, “break” out of a loop and stop it from running any more times.
It can often simply be avoided with careful planning of the conditional controlling a loop. It’s generally advised to be careful
with breaking out of loops because it can result in unexpected processing when a programmer has a mental plan centered around a loop
finishing all its iterations. However, when used effectively, a break can increase the efficiency of a program and help
minimize its memory uses through unnecessary variables.
Note: break is most often used when a program wants to run a loop infinitely in a controlled manner. For example, a program that
runs until the user types “quit.” In that instance, the program may run forever, but will only break out of its running loop when
the user tells it.

1. In our program, the while loop will run a set amount of times or until a non-positive number is entered (this includes 0 and
negative numbers). Without changing the condition of the while loop, try to get it to stop when a non-positive number is entered
using the break keyword.

2. You may have noticed the break keyword isn’t necessary here to stop the loop from running.
Create a second while loop below the first one and use the condition number2 > 0 && numbers_entered2 < 10, then write the loop as
normal without any break. Don’t forget to initialize the new variables at the top of main.
Run the program again with the second loop, you’ll see both loops act the same exact way and stop when a negative number is entered. */

#include <stdio.h>

int main() {

  int number1 = 1;
  int numbers_entered1 = 0;

  int number2 = 1;
  int numbers_entered2 = 0;


  /*while (numbers_entered1 < 10) {
    printf("Loop 1 - Please enter a number: ");
    scanf("%d", &number1);
    if (number1 <= 0) {
      break; }
    numbers_entered1++; } */

  while (number2 > 0 && numbers_entered2 < 10) {
    printf("Loop 1 - Please enter a number: ");
    scanf("%d", &number1);
    numbers_entered2++;
  }


  printf("Good job! You’ve broken out!\n");
}



