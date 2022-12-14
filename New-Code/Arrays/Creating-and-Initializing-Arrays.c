/*
An array is a collection of data that can be of any type. For example, you can construct an array of ints, bools, chars, etc.
There are two types of arrays that can be created: an initialized array or an uninitialized array. As its name implies, an
uninitialized array is created without specifying the initial values it contains. As an example, we will create an uninitialized
array called age, containing four variables of type int, which represents the age of four siblings:

int age[4];

To indicate to the compiler that age is an array of ints and not a single int variable, we append [arraySize] (in this case,
arraySize is four) to the end of the variable name.

The general template for creating an uninitialized array is:
    dataType name[arraySize];
When you create an uninitialized array, you are required to specify its size so that the compiler may reserve the proper amount of
memory blocks. Once it is created, the size of the array cannot be changed; this means that arrays are static. An uninitialized
array can be populated later in a program.

In contrast, an initialized array is created by specifying the initial value of its elements. As an example, we will create an age
array with four initial ages:
int age[] = {7, 27, 34, 63};
The general template for creating an initialized array is:
    dataType name[] = {firstValue, secondValue, thirdValue, …};
Notice that in this case, you don’t need to specify the size of the array as it is implied from the number of elements supplied;
however, declaring an initialized array with the size specified will also work. The previous example could have also been written
like this:
int age[4] = {7, 27, 34, 63};

1. Create an uninitialized array of five doubles called q.
2. Create an initialized array of integers called evens consisting of the first five even numbers, starting with 2. */

#include<stdio.h>

int main() {

  // Checkpoint 1 code goes here.
  double q[5];
  // Checkpoint 2 code goes here.
  int evens[] = {2, 4, 6, 8, 10};
}



