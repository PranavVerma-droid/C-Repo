/*Dynamic allocation of memory is a very important subject in C. It allows building complex data structures such as linked lists.
Allocating memory dynamically helps us to store data without initially knowing the size of the data in the time we wrote the 
program.

To allocate a chunk of memory dynamically, we need to have a pointer ready to store the location of the newly allocated memory.
We can access memory that was allocated to us using that same pointer, and we can use that pointer to free the memory again, 
once we have finished using it.

person * myperson = (person *) malloc(sizeof(person));

This tells the compiler that we want to dynamically allocate just enough to hold a person struct in memory and then return
 a pointer of type person to the newly allocated data. The memory allocation function malloc() reserves the specified memory 
 space. In this case, this is the size of person in bytes.

The reason we write (person *) before the call to malloc() is that malloc() returns a "void pointer," which is a pointer 
that doesn't have a type. Writing (person *) in front of it is called typecasting, and changes the type of the pointer 
returned from malloc() to be person. However, it isn't strictly necessary to write it like this as C will implicitly convert 
the type of the returned pointer to that of the pointer it is assigned to (in this case, myperson) if you don't typecast it.

Note that sizeof is not an actual function, because the compiler interprets it and translates it to the actual memory size 
of the person struct. */
//Edit llol











//malloc() function:
#include <stdio.h>

int main() {
    int n = 4;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory cannot be allocated");
        return 0;
    }

    printf("Enter Input values:\n");
    for(int i = 0; i < n; ++i) {
        scanf("%d", ptr + i);

    }

    printf("Input Values:\n");
    for(int i = 0; i < n; ++i) {
        printf("%d\n", *(ptr + i));
    }
    return 0;



}