/*
The while loop examples we’ve looked at so far iterate over a sequence of numbers. This is so common that C, like most other
programming languages, has a special syntax for it.

When we know exactly how many times we want to iterate (or count), we can use a for loop instead of a while loop.

For example, this is a for loop:

for (int i = 0; i < 10; i++) {
printf("%d\n", i);
}

Let’s take a closer look at the first line:

for (int i = 0; i < 10; i++)

There are three parts to this separated by two ;:

    1. The initialization of a counter: int i = 0
    2. The condition: i < 10
    3. The change in the counter (in this case an increment): i++

In the first part, we create a variable i that starts from 0 and acts as our counter. In the second part, as long as our counter i
is less than 10, the statements within the loop will repeatedly run. In the third and final part, after each iteration of the for
loop, we add 1 to i using the ++ operator.
Or in other words, we start with some initialized variable, then while some condition is true, we do something, then we incrementally
change the control variable. Does this sound familiar?

It’s just like a while loop! In fact, the above for loop does the exact same thing as the while loop we just worked with in the
previous exercise!
The while loop from exercise 5:

int i = 0;

while (i < 10) {
    printf("%d\n", i);
    i++;
}

Note: This distinction is important because it allows us to switch between while loops and for loops to best fit the current
program’s needs. If we don’t quite know when a loop may end, we use a while loop. If we do know exactly when a loop should end,
we use a for loop.

1. First, let’s start with what you already know.
   Write a while loop that starts at 99, stops at 0, and prints the following:
   => “[i] bottles of pop on the wall.”
   => “Take one down and pass it around.”
   => “[i - 1] bottles of pop on the wall.”
   It should then decrement i by 1.
2. Convert your while loop into a for loop. */

int main() {

  int i = 99;

  // Write your loop here
    /*while (i > 0) {
    printf("%d bottles of pop on the wall.\n", i);
    printf("Take one down and pass it around.\n");
    printf("%d bottles of pop on the wall.\n", i - 1);
    --i;
    } */

for (i = 99; i > 0; --i) {
  printf("%d bottles of pop on the wall.\n", i);
  printf("Take one down and pass it around.\n");
  printf("%d bottles of pop on the wall.\n", i - 1);
}

}

