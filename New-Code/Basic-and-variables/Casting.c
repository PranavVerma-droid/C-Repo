#include <stdio.h>

int main() {

  double testScore = 95.7;
  int displayScore = 0;

displayScore = (int)testScore; //You can set the variable type
//and not have the compiler guess what it is.

  // No need to change below here
  printf("Great work, you got a %d%% on your test\n", displayScore);

}