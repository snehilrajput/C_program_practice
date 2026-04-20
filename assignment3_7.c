// Write a program to accept a number and print unique pairs of numbers such that multiplication of
// the pair is given number
// Input: 24
// Output:
// 1 * 24 = 24
// 2 * 12 = 24
// 3 * 8 = 24
// 4 * 6 = 24

#include<stdio.h>

int main(){
    int i, j;
    int result;
    int n = 24;
   
   
   for(i = 1; i<=n; i++){
       for(j = 1; j<= n; j++){
           result = i * j;
           if( result == n){
          printf("%d * %d = %d\n", i , j , n );
          
      }
       }

   }
    
    return 0;
}