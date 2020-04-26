/******************************************************************************

Ivana Lanzani - Test 2
Question 3

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void static_array(void){
    static int arr[150000];
}
void stack_array(void){
    int arr2[150000];
}
void heap_array(void){
    int *arr3 = (int*) malloc(150000 *sizeof(int));
}


main(void) {
   clock_t start, end;
   double timeTaken;
   int i;
   
   start = clock();
   for (i=0; i<120000; i++){
       static_array();
   }
   end = clock();
   
   timeTaken = ((double) (end - start)) / CLOCKS_PER_SEC;
   printf("The time taken to call static_array() 120000 times was %f seconds. \n",timeTaken); 
   
   start = clock();
   for (i=0; i<120000; i++){
       stack_array();
   }
   end = clock();

   timeTaken = ((double) (end - start)) / CLOCKS_PER_SEC;
   printf("The time taken to call stack_array() 120000 times was %f seconds. \n",timeTaken); 
   
   start = clock();
   for (i=0; i<120000; i++){
       heap_array();
   }
   end = clock();
   
   timeTaken = ((double) (end - start)) / CLOCKS_PER_SEC;
   printf("The time taken to call heap_array() 120000 times was %f seconds. \n",timeTaken); 
}
