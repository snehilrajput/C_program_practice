// Write a program to accept a number and print all factors excluding the number
// Input: 24
// Output: all factors: 1, 2, 3, 4, 6, 8, 12

#include<stdio.h>

int main(){
    
    int n= 24; 
   
    printf("Factorial of %d\n", n);

    for(int i=1; i <=n; i++){
       if (n % i == 0)
            printf("%d\n", i);
    }
   

    return 0;
}