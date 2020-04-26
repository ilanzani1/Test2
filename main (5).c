/******************************************************************************

Ivana Lanzani - Test 2
Question 5

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int fun(int *k) { 
*k += 4; 
     return 3 * (*k) - 1; 
} 

void main() { 
int i = 10, j = 10, sum1, sum2; 
      sum1 = (i / 2) + fun(&i); 
      sum2 = fun(&j) + (j / 2); 
      printf("sum1 = %d \n", sum1);
      printf("sum2 = %d ", sum2);
} 

