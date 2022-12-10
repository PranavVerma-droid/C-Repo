/*  You can also assign values to members of a structure variable at declaration time, in a single line.
    Just insert the values in a comma-separated list inside curly braces {}. 
    Note that you don't have to use the strcpy() function for string values with this technique:*/
#include <stdio.h>

// Create a structure
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};
  struct myStructure s2;

  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);
  //We can also Copy Structures from one to another
  s1 = s2;
  //If you want to change/modify a value, you can use the dot syntax (.).
  //And to modify a string value, the strcpy() function is useful again:

    /*
    #include <stdio.h>
    #include <string.h>

    // Create a structure
    struct myStructure {
    int myNum;
    char myLetter;
    char myString[30];
    };

    int main() {
    // Create a structure variable and assign values to it
    struct myStructure s1 = {13, 'B', "Some text"};
  
    // Modify values
    s1.myNum = 30;
    s1.myLetter = 'C';
    strcpy(s1.myString, "Something else");

    // Print values
    printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

    return 0;
    }*/
  return 0;
}