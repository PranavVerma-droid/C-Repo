//Because strings must be written within quotes, C will misunderstand this string, and generate an error:
//char txt[] = "We are the so-called "Vikings" from the north.";
//The Above Code will generate a error

/*
\' 	' 	Single quote
\" 	" 	Double quote
\\ 	\ 	Backslash */


#include <stdio.h> //Always in code

int main() { //Main code
    //The backslash (\) escape character turns special characters into string characters:
    //The sequence \"  inserts a double quote in a string:
    char txt[] = "We are the so-called \"Vikings\" from the north.";

    //The sequence \'  inserts a single quote in a string:
    char txt2[] = "It\'s alright.";
    
    //The sequence \\  inserts a single backslash in a string:
    char txt3[] = "The character \\ is called backslash.";

    //Other popular escape characters in C are:
    /*  \n 	New Line 	
        \t 	Tab 	
        \0 	Null    */
} 

