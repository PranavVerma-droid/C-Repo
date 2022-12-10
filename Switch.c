/*
1. The switch expression is evaluated once
2. The value of the expression is compared with the values of each case
3. If there is a match, the associated block of code is executed
4. The break statement breaks out of the switch block and stops the execution
5. The default statement is optional, and specifies some code to run if there is no case match
*/
    



#include <stdio.h>
int main() {
    int day = 4;
  
    switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
    default:
        printf("Invalid Number.");
        //The default keyword specifies some code to run if there is no case match.
        //Note: The default keyword must be used as the last statement in the switch, and it does not need a break.
  }
    
  return 0;




}
    