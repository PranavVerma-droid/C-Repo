/*
The main benefit of arrays is the ability to work with large amounts of data without assigning each piece of data its own variable
name; therefore arrays usually contain many elements. To work with these elements, you will probably have to do something repeatedly.
As you learned earlier in the course, a loop is used in order to execute repeated code. The technique of using a loop on an array is
called “looping through the array.” Recall the two kinds of loops: a for loop and a while loop.

Let’s first take a look at how to loop through an array using a while loop. Consider the example of having an array consisting of 20
random integers and you wish to print its contents to the screen. Here’s how this is done with a while loop:

#include<stdio.h>

int main() {
    int arr[] = {6, 9, 18, 37, 4, 23, 27, 16, 1, 30, 22, 7, 10, 25, 3, 2, 35, 11, 19, 28}; // Array
    int i = 0; // Initialize index i to zero
    while(i < 20){ // while loop
        printf("%i\n", arr[i]); // Access element at index i in arr and print
        i++; // Increment the index
    }
}

In this piece of code, we have the 20 integer array arr. An index variable is declared and initialized outside of the loop.
The loop runs for indices less than the size of the array (in this case, it is 20). The element at index i is printed along with a
new line. Finally, the index is incremented by one.

This same process can be done using a for loop like so:

#include<stdio.h>

int main() {
    int arr[] = {6, 9, 18, 37, 4, 23, 27, 16, 1, 30, 22, 7, 10, 25, 3, 2, 35, 11, 19, 28}; // Array
    for(int i = 0; i < 20; i++){ // for loop
        printf("%i\n", arr[i]); // Access element at index i in arr and print
    }
}








1. Loop through array arr and print each element on a separate line. The array contains 20 elements.
2. Given the integer array arr2, fill up the array so that each element in the array is four plus the index of the element.
   Example:
   arr[0] = 4, arr[1] = 5, arr[2] = 6, etc. */



#include<stdio.h>

int main() {
  int arr[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 20, 22, 26, 28, 29};

  int arr2[100];

  // Code for Checkpoint 1 goes here
    /*for (int i = 0; i < 20; ++i) {
      printf("%i\n", arr[i]);
    } */
  // Code for Checkpoint 2 goes here
  int j = 0;
  for (int j = 0; j < 100; ++j) {
    arr2[j] = j + 4;
    printf("%i\n", arr2[j]);
  }
}

