/*
As an example of iteration, we have the first program ever to run on a stored-program computer (the EDSAC).
It was written and run by David Wheeler in the computer laboratory at Cambridge University, England, on May 6th, 1948,
to calculate and print a simple list of squares like the following:

0   0
1   1
2   4
3   9
4   16
5   25
6   36
7   49
8   64
9   81

On the left, there are numbers from 0 to 9. On the right are their squares. For example, for the number 9: 9 * 9 = 81.
Note: An algorithm like this is one of the easiest tells for needing a loop. But as you develop your programming skills,
you’ll pick up more and more subtle hints and uses for where loops can be incorporated into your code!

1. Write a while loop that prints out a number, followed by a tab \t, then the square of that number, followed by a new line
\n like so:
printf("%d\t%d\n", num, num * num);
Have the while loop calculate this from 0 to 9. */

#include <stdio.h>

int main() {

  int i = 0;
  int square = 0;

  // Write a while loop here:

  while (i < 10) {
    printf("%d\t%d\n", square, square * square);
    ++square;
    ++i;

  }

}
