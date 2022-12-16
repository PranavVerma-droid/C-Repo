/*
Creating a string can be done in one of two ways. The first way is to simply create an initialized array of characters
populated by the characters of the string. Here’s an example of the string “Hello World” created using an initialized
array:

char str[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

The character array is populated by the characters of “Hello World.” There are two important things to note here:

    1. A blank space is a character, so it is included by putting a space in single quotes.
    2. The very last character in the array is \0 known as the null terminating character. It signifies the end of the string
       and must be included when creating a string as an initialized array.

The string “Hello World” has 11 characters in it (space is a character too!) but the size of str[] is 12: 11 characters
for “Hello World” plus one for the null character.

The second way to create a string variable in C is to use what is called a string literal. This is the creation of a string by
initializing the char array with the full string in double quotes like so:

char str[] = "Hello World";

This is still an array of characters and is to be treated as such. The only benefit to creating a string in this way is that
it’s easier to type and the null terminating character (‘\0’) is added implicitly. The size of this array is still 12 for the
same reasons mentioned before.

Using the printf() function to print the string is done by providing the name of the string (array), regardless of how it was
created, and "%s" to signify that printf() is working with a string. Here is an example:

char str[] = "Hello World";
printf("%s", str); // This will not print a new line
printf("%s\n", str); // This will print a new line

Note: Characters in C are case-sensitive; i.e., the characters ‘A’ and ‘a’ are treated as two different kinds of characters.


1.Create the string “Computer” using an initialized array of chars. The variable should be called comp.
2. Using string literals, create a string called compCode containing the string “Computer Code”.
3. Print the string stored in comp followed by the string stored in compCode on separate lines. */

#include<stdio.h>

int main() {
  // Checkpoint 1 code goes here
  char comp[] = {'C', 'o', 'm', 'p', 'u', 't', 'e', 'r', '\0'};
  // Checkpoint 2 code goes here
  char compCode[] = "Computer Code";
  // Checkpoint 3 code goes here
  printf("%s\n", comp);
  printf("%s\n", compCode);
}