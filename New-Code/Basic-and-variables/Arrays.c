#include <stdio.h> 

/*Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.
To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].
To insert values to it, use a comma-separated list, inside curly braces. */ 

int main() { 
    /*To access an array element, refer to its index number.
    Array indexes start with 0: [0] is the first element. [1] is the second element, etc.*/
    
    int myNumbers[] = {25, 50, 75, 100};
    printf("%d", myNumbers[0]); //Outputs 25

    //To change the value of a specific element, refer to the index number:
    myNumbers[0] = 33;
    printf("%d", myNumbers[0]); //Outputs 33

    //Loop through a array:
    int myNumbers2[] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++) {
    printf("%d\n", myNumbers2[i]); //Will output all elements of myNumbers2
    }

    //Another common way to create arrays, is to specify the size of the array, and add elements later:
    int myNumbers3[4];

    // Add elements
    myNumbers3[0] = 25;
    myNumbers3[1] = 50;
    myNumbers3[2] = 75;
    myNumbers3[3] = 100;


} 