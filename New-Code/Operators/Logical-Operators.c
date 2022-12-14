/*
You do not just have to check one part at a time when you are doing your comparisons. C lets you see if two
or more parts are true, if at least one is true, or if something is not true. We have already seen a quick example with !=,
checking to see if the left side is not equal to the right side, but ! in front of any boolean will see if the statement is not
true. You will learn more about this when you learn about boolean statements in general
If you are checking to see if two or more parts are true you can use && between them. If you want to see if any of the parts
is true you can use ||. To see both in action here is a trivial example:

int a = 2;
int b = 3;
if (a == b && a == 2) {
printf("both are true\n");
}
if (a == b || a == 2) {
printf("one or both are true\n");
}
if (!(a == b)) {
printf("they are not equal\n");
}

In this example, only the second and third statements would evaluate to true. The second statement will be true because a does
not equal b but does equal 2 - remember, only one of the parts needs to evaluate to true when using ||. The last statement will
be true because the inner equality check will evaluate to false and we then take the opposite of that with !.

1. The code on the right is set to output the correct text when the values are equal, but you can see they are not. Change the if
statement to evaluate to true when the variables are not equal: */

#include <stdio.h>

int main() {

  int x = 1;
  int y = 27;

  if (!(x == y)) {
    printf("Congratulations on setting up a comparison correctly!");
  } else {
    printf("Please try again!");
  }

}

//https://www.codecademy.com/courses/learn-c/lessons/c-arithmetic-logic-operations/exercises/logical-operators
