/*
Up to now, when looping through an array, the size of the array has been hardcoded
into the loop condition. This is bad practice as it makes the loop only applicable to
arrays of a single size. To make a loop valid for arrays of any size, the sizeof() function
is used. sizeof() is a special function that returns an integer that is the size of the array
in bytes. The syntax for this function is as follows:

    sizeof(arr);

Here is an example:

int main() {
    int arr[] = {3, 8, 4, 0, 9};
    int len = sizeof(arr); // Assign size of array to variable len
    printf("%i", len);
}

The array has five elements in it, however, this code will output the number 20 as opposed to
five because sizeof() returns the total number of bytes occupied by the array regardless of
the type of elements. Recall that a variable occupies several bytes in memory determined by
its type. In this case, the array has five integers each of which occupies four bytes of
memory; therefore the total size is 5 x 4 = 20 bytes. To get the actual number of elements
in the array, we have to divide the total size of the array by the size of the data type it
contains. Fortunately, the sizeof() function can also be applied to any data type to determine
its size in memory. The syntax is the same as that for an array:
    sizeof(dataType);
We can modify the variable len to represent the number of elements in the array arr like so:

// Assign size of array to variable len. Scale by the size of an int.
int len = sizeof(arr)/sizeof(int);

The code will now output the expected size of the array (five).
Using this technique, a loop can now be written to work with arrays of arbitrary length. Here
is an example:

#include<stdio.h>

int main() {
    int arr[] = {3, 2, 10, 6, 18, 5, 8, 4, 0, 9};
    int len = sizeof(arr)/sizeof(int);
    for(int i = 0; i < len; i++){
        printf("%i\n", arr[i]);
    }
}

Notice how in the condition for the for loop, the variable len is used to represent the length
of the array as opposed to hardcoding it in. We can further simplify the code above by
eliminating the variable len and directly computing the size of the array in the for loop
condition.

#include<stdio.h>

int main() {
    int arr[] = {3, 2, 10, 6, 18, 5, 8, 4, 0, 9};
    for(int i = 0; i < sizeof(arr)/sizeof(int); i++){
    printf("%i\n", arr[i]);
    }
}

1. Set the variable len to the length of the array arr.
2. Loop through the array and print the contents. Each element should be on a new line. */

#include<stdio.h>

int main() {
  double arr[] = {1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 6.54, 9, 11};
  int len;

  // Checkpoint 1 code goes here.
  len = sizeof(arr)/sizeof(double);
  printf("%i\n", len);

  // Checkpoint 2 code goes here.
  for (int i = 0; i < len; ++i) {
    printf("%f\n", arr[i]);

  }
}

