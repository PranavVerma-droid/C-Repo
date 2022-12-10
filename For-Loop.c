/*for (statement 1; statement 2; statement 3) {
  // code block to be executed
}*/

/*Statement 1 is executed (one time) before the execution of the code block.

Statement 2 defines the condition for executing the code block.

Statement 3 is executed (every time) after the code block has been executed.*/

#include <stdio.h> //Always in code

int main() { //Main code
    int i;

    for (i = 0; i < 5; i++) {
    printf("%d\n", i);
    }

    //Nested For-Loops:
    int k, j;

    // Outer loop
    for (k = 1; k <= 2; ++k) {
    printf("Outer: %d\n", k);  // Executes 2 times

    // Inner loop
    for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
    }
    }
} 