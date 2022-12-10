/*  Pointers are also variables and play a very important role in C programming language. 
    They are used for several reasons, such as:

    1. Strings
    2. Dynamic memory allocation
    3. Sending function arguments by reference
    4. Building complicated data structures
    5. Pointing to functions
    6. Building special data structures (i.e. Tree, Tries, etc...)
    
    And many more.  */

/*  A pointer is essentially a simple integer variable which holds a memory address that points to a value, 
    instead of holding the actual value itself. The computer's memory is a sequential store of data, and a pointer points to a 
    specific part of the memory. Our program can use pointers in such a way that the pointers point to a large amount of memory 
    - depending on how much we decide to read from that point on.  

    //We've already discussed strings, but now we can dive in a bit deeper and understand what strings in C really are 
    //(which are called C-Strings to differentiate them from other strings when mixed with C++) The following line:
    //char * name = "John";

Dereferencing is the act of referring to where the pointer points, instead of the memory address. We are already using dereferencing 
in arrays - but we just didn't know it yet. The brackets operator - [0] for example, accesses the first item of the array. 
And since arrays are actually pointers, accessing the first item in the array is the same as dereferencing a pointer. 
Dereferencing a pointer is done using the asterisk operator *.
If we want to create an array that will point to a different variable in our stack, we can write the following code:  *///


