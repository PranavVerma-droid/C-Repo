/*C has the following conditional statements:

    1. Use if to specify a block of code to be executed, if a specified condition is true
    2. Use else to specify a block of code to be executed, if the same condition is false
    3. Use else if to specify a new condition to test, if the first condition is false
    4. Use switch to specify many alternative blocks of code to be executed*/
#include <stdio.h>
int main() {
    
    int time = 22;
    if (time < 10) {
        printf("Good morning.");
    } else if (time < 20) {
        printf("Good day.");
    } else {
        printf("Good evening.");

    //C also has shorthand if-else statements:
    (time < 18) ? printf("Good day.") : printf("Good evening."); //does the same thing as above

}