/*C also has many useful string functions, which can be used to perform certain operations on strings.
To use them, you must include the <string.h> header file in your program:   */

#include <stdio.h> //Always in code

int main() { //Main code
    //For example, to get the length of a string, you can use the strlen() function:
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(alphabet));   // 26
    printf("%d", sizeof(alphabet));   // 27

    //Note that sizeof and strlen behaves differently, as sizeof also includes the \0 character when counting:
    //To concatenate (combine) two strings, you can use the strcat() function:

    char str1[20] = "Hello ";
    char str2[] = "World!";

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

    // Print str1
    printf("%s", str1);
    //Note that the size of str1 should be large enough to store the result of the two strings combined.



    //To copy the value of one string to another, you can use the strcpy() function:
    char str3[20] = "Hello World!";
    char str4[20];

    // Copy str1 to str2
    strcpy(str4, str5);

    // Print str2
    printf("%s", str4);
    //Note that the size of str2 should be large enough to store the copied string.


    //To compare two strings, you can use the strcmp() function.
    //It returns 0 if the two strings are equal, otherwise a value that is not 0:
    char str10[] = "Hello";
    char str11[] = "Hello";
    char str12[] = "Hi";

    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str10, str11));  // Returns 0 (the strings are equal)

    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str10, str12));  // Returns -4 (the strings are not equal)



} 