// 13. Write a program to display n terms of Fibonacci series
// Input: 6
// Output: 1, 1, 2, 3, 5, 8
//F(n) = F(n-1) + F(n-2) Fibonacci series

#include<stdio.h>
int main(){
    int n, first=0, second=1, next ;

    printf("enter the number : ");
    scanf("%d", &n);

    for(int i =1; i <= n; i++){
    
        printf("%d\n", first);

        next = first + second;
        first = second;
        second = next;
    }
return 0 ;
}

