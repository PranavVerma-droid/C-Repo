/*
Congratulations on completing the lesson on conditionals! 🙌
Let’s review some of the major concepts from the lesson:

    1. An if statement checks a condition and will execute a task if that condition evaluates to true.
    2. if / else statements make binary decisions and execute different code blocks based on a provided condition.
    3. We can add more conditions using else if statements.
    4. Relational operators, including <, >, <=, >=, ==, and != can compare two values.
    5. Logical operators, including &&, ||, and ! can allow multiple conditions in one conditional statement.
    6. A switch statement can be used to simplify the process of writing multiple else if statements. The break keyword stops
       the remaining cases from being checked and executed in a switch statement.
    7. A ternary operator can be used to simplify the process of an if else statement.

1. Optional: Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories
on other planets within the solar system.
Write a space.c program that helps him keep track of his target weight by: It should ask him what his earth weight is.
Ask him to enter a number for the planet he wants to fight on. It should then compute his weight on the destination planet.

Compile and execute:
gcc space.c
./a.out

Here is the table of conversion:
# 	Planet 	    Relative Gravity
1 	Mercury 	0.38
2 	Venus 	    0.91
3 	Mars 	    0.38
4 	Jupiter 	2.34
5 	Saturn 	    1.06
6 	Uranus 	    0.92
7 	Neptune 	1.19    */

#include <stdio.h>
#include <stdlib.h>

int main() {
  double weight;
  int x = 2;

  printf("Please enter your current earth weight: ");
  scanf("%lf", &weight);

  switch(x) {
    case 1:
      weight *= 0.38;
      break;
    case 2:
      weight *= 0.91;
      break;
    case 3:
      weight *= 0.38;
      break;
    case 4:
      weight *= 2.34;
      break;
    case 5:
      weight *= 1.06;
      break;
    case 6:
      weight *= 0.92;
      break;
    case 7:
      weight *= 1.19;
      break;
  }

  printf("\nYour weight: %lf\n", weight);

}



