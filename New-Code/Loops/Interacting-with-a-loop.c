/*
We have a program that asks and checks for a pin. It uses a while loop, which will be the first type of loop we’ll learn about,
to ask the user to type and enter a pin over and over again until the correct one is entered.
As a reminder, here’s how to compile and execute your code:

gcc enter_pin.c
./a.out

Note: You don’t need to understand the code yet, just how to interact with it!


1. Compile and execute in the terminal using
gcc enter_pin.c
./a.out
Note: The check will be red until you input the last PIN! This includes when you compile.
When the program asks you to Enter your PIN:, try the following:

Type 1111 and press enter.
Type 2021 and press enter.
Type 1234 and press enter.  */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int pin = 0;
  int tries = 0;

  printf("BANK OF PranavVerma-droidS:\n");
  printf("Enter your PIN: ");
  scanf("%d", &pin);

  tries++;

  while (pin != 1234 && tries < 3) {
    printf("Enter your PIN: ");
    scanf("%d", &pin);
    tries++;
  }

  if (pin == 1234) {
    printf("PIN accepted!\n");
    printf("You now have access.\n");
  }
}
