/*
It’s one thing to do all these operations, but if the results are thrown away as soon as the statement
finishes executing, the entire process has limited usability. What we need is a way to assign values to variables.
We have already seen the basic way to do this using =, but C offers some additional shorthand tricks for assignment.
Each of the basic math symbols you have learned in this lesson can be done in C with a shortcut. Let’s look at an
example of two ways to write simple additions that would give you the same end result:

int a = 2;
int b = 3;
a = a + b;

This could also be written as:
int a = 2;
int b = 3;
a += b;

Notice that C lets us shorthand adding something to a variable’s starting value by using +=.
You can do this same shorthand with -=, *=, /=, and %= for subtraction, multiplication, division, and modulo,
respectively.


1. In the example, we showed how to set a variable to itself plus another variable. In the code block on the right,
find the total losses by multiplying losses by timesServerCrashed using the shorthand method.

2. You find out that the losses calculated per crash were far too high, in fact, they were estimated at twice
what they actually are! Update your losses to be half what you just calculated in the previous step (still using
the short hand assignment method).  */

#include <stdio.h>

int main() {

  int timesServerCrashed = 5;
  double losses = 500.95;

  losses *= timesServerCrashed;
  losses /= 2;

  printf("Total Losses: $%.2f\n", losses);
}

