#include <stdio.h>
int main() {
int sum1 = 100 + 50;        // 150 (100 + 50)
int sum2 = sum1 + 250;      // 400 (150 + 250)
int sum3 = sum2 + sum2;     // 800 (400 + 400) 
//The 'sizeof' operator tells us the memory size (bytes) of a data of a variable
int myInt;
float myFloat;
double myDouble;
char myChar;
 
printf("%lu\n", sizeof(myInt));
printf("%lu\n", sizeof(myFloat));
printf("%lu\n", sizeof(myDouble));
printf("%lu\n", sizeof(myChar));
  
return 0;
/*Note that we use the %lu format specifer to print the result, instead of %d. It is because the compiler expects the sizeof 
operator to return a long unsigned int (%lu), instead of int (%d). On some computers it might work with %d, but it is safer 
to use %lu.





C divides the operators into the following groups:

    1. Arithmetic operators
    2. Assignment operators
    3. Comparison operators
    4. Logical operators
    5. Bitwise operators  

Basic Operators:

+ 	Addition 	    Adds together two values 	            x + y 	
- 	Subtraction 	Subtracts one value from another 	    x - y 	
* 	Multiplication 	Multiplies two values 	                x * y 	
/ 	Division 	    Divides one value by another 	        x / y 	
% 	Modulus 	    Returns the division remainder 	        x % y 	
++ 	Increment 	    Increases the value of a variable by 1 	++x 	
-- 	Decrement 	    Decreases the value of a variable by 1 	--x

Assignment Operators:

= 	    x = 5 	    x = 5 	
+= 	    x += 3 	    x = x + 3 	
-= 	    x -= 3 	    x = x - 3 	
*= 	    x *= 3 	    x = x * 3 	
/= 	    x /= 3 	    x = x / 3 	
%= 	    x %= 3 	    x = x % 3 	
&= 	    x &= 3 	    x = x & 3 	
|= 	    x |= 3 	    x = x | 3 	
^= 	    x ^= 3 	    x = x ^ 3 	
>>= 	x >>= 3 	x = x >> 3 	
<<= 	x <<= 3 	x = x << 3 

Comparative Operators:

== 	Equal to 	                x == y 	
!= 	Not equal 	                x != y 	
> 	Greater than 	            x > y 	
< 	Less than 	                x < y 	
>= 	Greater than or equal to 	x >= y 	
<= 	Less than or equal to 	    x <= y 

Logical Operators:

&&  	Logical and 	Returns true if both statements are true 	                x < 5 &&  x < 10 	
||  	Logical or 	    Returns true if one of the statements is true 	            x < 5 || x < 4 	
! 	    Logical not 	Reverse the result, returns false if the result is true 	!(x < 5 && x < 10) */

}