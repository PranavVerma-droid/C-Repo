/*  C structures are special, large variables which contain several named variables inside. Structures are the basic foundation for 
    objects and classes in C. Structures are used for:

    1. Serialization of data
    2. Passing multiple arguments in and out of functions through a single argument
    3. Data structures such as linked lists, binary trees, and more  */

//Structures (also called structs) are a way to group several related variables into one place. 
//Each variable in the structure is known as a member of the structure.

#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create different struct variables
  struct myStructure s1;
  struct myStructure s2;

  // Assign values to different struct variables
  s1.myNum = 13;
  s1.myLetter = 'B';

  s2.myNum = 20;
  s2.myLetter = 'C';

  // Print values
  printf("s1 number: %d\n", s1.myNum);
  printf("s1 letter: %c\n", s1.myLetter);

  printf("s2 number: %d\n", s2.myNum);
  printf("s2 letter: %c\n", s2.myLetter);

  return 0;
}
