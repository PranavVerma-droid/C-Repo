//Remember that strings in C are actually an array of characters, and unfortunately, you can't assign a value to an array like this:
/*#include <stdio.h>
int main() {
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
  struct myStructure s1;

  // Trying to assign a value to the string
  s1.myString = "Some text";

  // Trying to print the value
  printf("My string: %s", s1.myString);

  return 0;
} 
}*/

//An error will occur:
//prog.c:12:15: error: assignment to expression with array type

//We can use the strcpy() function and assign the value to s1.myString, like this:

#include <stdio.h>
#include <string.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
  struct myStructure s1;

  // Assign a value to the string using the strcpy function
  strcpy(s1.myString, "Some text");

  // Print the value
  printf("My string: %s", s1.myString);

  return 0;
}