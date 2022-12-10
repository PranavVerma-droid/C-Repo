#include <stdio.h> //Always in code

int main() { //Main code
    int i = 0;
    //In this code, the code in the loop will run, over and over again, as long as a variable (i) is less than 5:
    while (i < 5) {
    printf("%d\n", i);
    i++;
    } 

    //The do-while loop is also kinda the same, it will execute the 'do', and then run the while, and if the while loop
    //is not satisfied, it will run the do again

    int a = 0;

    do {
    printf("%d\n", a);
    a++;
    }
    while (a < 5);
}