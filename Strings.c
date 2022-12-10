/*Strings are used for storing text/characters.
For example, "Hello World" is a string of characters.
Unlike many other programming languages, C does not have a String type to easily create string variables. 
Instead, you must use the char type and create an array of characters to make a string in C: */

#include <stdio.h> //Always in code

int main() { //Main code
    char greetings[] = "Hello World!";
    //To output the string, you can use the printf() function together with the format specifier %s to tell C 
    //that we are now working with strings:
    printf("%s", greetings);

    //You can also print single chars using indexing:
    printf("%c", greetings[0]); //Output's H

    //To change the value of a specific character in a string, refer to the index number, and use single quotes:
    greetings[0] = 'J';
    printf("%s", greetings);

    //You can also loop through the characters of a string, using a for loop:
    char carName[] = "Volvo";
    int i;

    for (i = 0; i < 5; ++i) {
        printf("%c\n", carName[i]);
    }

    //you can create a string with a set of characters. 
    //This example will produce the same result as the example in the beginning of this page:

    char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s", greetings2);

    //Why do we include the \0 character at the end? This is known as the "null terminating character", and must be 
    //included when creating strings using this method. It tells C that this is the end of the string.
} 