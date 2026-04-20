// 4. Write a program to find factorial of given number.
// Input: 5
// Output: 1 * 2 * 3 * 4 * 5 = 120

#include <stdio.h>

int main(){
    int n;
    int fact = 1;

    printf("enter n :");
    scanf("%d" ,&n);
  
    for(int i=1; i <=n; i++){
        fact = fact * i;
    }
    printf("Factorial of %d = %d\n", n, fact);

    return 0;
}



