/*
You may have run across modulo, symbolized as the percent symbol %, before. If not, or as a reminder,
modulo performs division but instead of giving you the number of times the denominator goes into the
numerator, it gives you the remainder after the division. As an example, if you took 10 / 3 you would get
3 with 1 left over. If you wanted to just get the remainder and didn’t care about the other part you would
do 10 % 3. This would give you 1.

A common use of modulo is determining if an integer is even or odd. If we have an integer, x, and aren’t sure
if it’s even or odd, we can use modulo to see the remainder. If the result is 1, x is odd, otherwise it is even.





1. Modulo can also be used to determine the day of the week given a start and end day. For our exercise, we are going to assume that we are starting on the first (represented by 0) day of the week and we want to
figure out if n (program starts at 13) days go by, what day of the week is it now.
For the first step, set the initial values for daysThatPass (any positive integer you like) and
daysInWeek (7) during their declaration.


2. Your task is to use modulo logic to determine the day of the week it will be after n days pass.
Store the result in endingDayOfWeek. If you need help figuring out what you would need to do to calculate
this take a look at the hint.

The day of the week would be:
(starting day + days that pass) % days in a week
since we are starting at day 0 it can be ignored, so simplified to:
days that pass % days in a week
Store this value in your ending day of the week variable. */


#include <stdio.h>

int main() {

  int endingDayOfWeek = 0;
  int daysThatPass = 5;
  int daysInWeek = 7;

  endingDayOfWeek = daysThatPass % daysInWeek;

  printf("You started on the 1st (0) day of the week, went %d days from this, so it is now the %d day of the week\n", daysThatPass, endingDayOfWeek);
}
