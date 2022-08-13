#include<stdio.h>
int main() {
   int array[10] = {3, 11, 3, 4, 50, 69, 7, 8, 9, 101};
   int k, largest, second;

   if(array[0] > array[1]) {
      largest = array[0];
      second  = array[1];
   } else {
      largest = array[1];
      second  = array[0];
   }

   for(k = 2; k < 10; k++) {
      if( largest < array[k] ) {
         second = largest;
         largest = array[k];
      } else if( second < array[k] ) {
         second =  array[k];
      }
   }

   printf("Largest - %d \nSecond - %d \n", largest, second);   

   return 0;
}
