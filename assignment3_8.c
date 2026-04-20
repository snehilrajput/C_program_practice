// Write a program to accept a number and print its prime factors.
// Input: 180
// Output: 180 = 2 * 2 * 3 * 3 * 5

#include <stdio.h>

int main(){
    int n ;
    int i;

    printf("enter number : ");
    scanf("%d", &n);
    for(int i=2; i <=n; i++){
      while(n % i == 0){
        printf("\n%d", i);
        n = n / i;
      
      }
           
    }
return 0;
}