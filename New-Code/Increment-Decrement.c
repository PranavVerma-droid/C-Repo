/*
C has several shorthand tricks you can use to make your life easier. For instance, it is very common inside a
loop to have a counter you want to increment (add 1) or decrement (subtract 1) on each pass. C lets you do
this by using a double symbol such as:
int a = 1;
a++;

This would now set the value in a to be 2. The shorthand for decrementing is -- instead of ++.
So if we wanted to decrement a, it would be:
a--;


1. Decrement m using shorthand.
2. Now do the opposite (increment using the shorthand) to n.    */

#include <stdio.h>

int main() {
  int n = 13;
  int m = 10;

  m--;
  n++;

  printf("m = %d\n", m);
  printf("n = %d\n", n);
}
