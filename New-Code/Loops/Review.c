/*
Great job! You completed the lesson on loops! 🙌
Key concepts covered in this lesson:
    1. Loops perform repetitive actions so we don’t have to code those actions manually every time.
    2. How to write while loops with a condition.
    3. How to write do-while loops with a condition.
    4. How to write for loops with a counter that increments or decrements.
    5. How to break out of a loop.
    6. How to continue a loop at any point.

1. Run the loop! :- */

#include <stdio.h>

int main() {

  int learning = 1;
  int cont;

  while (learning++ < 10) {

    printf("Congratulations! Are you ready to continue learning in the next lesson?\n");
    printf("1 - Yes\t2 - No\n");

    scanf("%d", &cont);

    if (cont == 1) {

      printf("Awesome! Let's break out and move forward!\n");
      break;

    } else {

      printf("Okay! Keep practicing! And remember to take breaks!\n");

    }

  }

}
