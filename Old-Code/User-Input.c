#include <stdio.h> //Always in code

int main() { //Main code
    // Create an integer variable that will store the number we get from the user
    int myNum2;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum2);

    // Output the number the user typed
    printf("Your number is: %d", myNum2);


    //The scanf() function also allow multiple inputs:

    int myNum;
    char myChar;

    // Ask the user to type a number AND a character
    printf("Type a number AND a character and press enter: \n");

    // Get and save the number AND character the user types
    scanf("%d %c", &myNum, &myChar);

    // Print the number
    printf("Your number is: %d\n", myNum);

    // Print the character
    printf("Your character is: %c\n", myChar);

    //Output:
    /*  Type a number AND a character and press enter: 5b
        Your number is: 5
        Your character is: b    */
    
    
    //We can also get a string entered by the user:

    // Create a string
    char firstName[30];

    // Ask the user to input some text
    printf("Enter your first name: \n");

    // Get and save the text
    scanf("%s", firstName);

    // Output the text
    printf("Hello %s", firstName);


    //when working with strings, we often use the fgets() function to read a line of text. 
    //Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:

    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);
    //Use the scanf() function to get a single word as input, and use fgets() for multiple words.


} 