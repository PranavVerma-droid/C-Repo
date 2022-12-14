/*
C does not just process the statements you send it blindly from left to right. It looks at the statements and applies standard rules
to the order in which the statements should be processed. For instance, it will do multiplication before addition.

There are many more symbols and operations you will learn as you progress with your knowledge of C, but here is a list of the order
for the operations we have gone over in this lesson.

Looking at the table below, the operations with priority 1 will be performed first. Then priority 2, 3, and so on will be processed.
For operators of the same level of priority, they operations occur from left to right.

Priority 	Symbol
1 	        ++
1 	        --
1 	        ()
2 	        !
2 	        (typecast)
3 	        *
3 	        /
3 	        %
4 	        +
4 	        -
5 	        <, <=
5 	        >, >=
6 	        ==, !=
7 	        &&
8 	        ||
9 	        all assignment operators

Ex:
1. The code on the right is using the order of operations described above, so for the variable x it will do the multiplication first
then the addition. However, we want the addition to occur first.
2. Now take a look at the y equation and notice that it will do the division first, and as an int it will cast it to 0, then add 6.
Update the line so it does the addition first and resolves to 0 (casting to an int).    */

#include <stdio.h>

int main() {

  int x;
  int y;

  x = (2 + 3) * 5;
  y = 2 / (4 + 6);

  printf("x is: %d\n", x);
  printf("y is: %d\n", y);
}