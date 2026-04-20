// macros : function 
#include<stdio.h>
#define sqr(x) x*x // sqr(5+3)
#define sqr1(x) (x)*(x) //sqr(5+3) = (5+3)*(5+3) = 64
#define swap(a,b) int temp = a; a = b ; b = temp
//2nd way of swapping
#define swap1(a, b , type) type temp = a ;  a = b ; b = temp
int main(){
    printf("sqaure = %d\n", sqr(5)); //25
    printf("sqaure = %d\n", sqr(5+3)); // 5+3*5+3 = 23
    printf("sqaure = %d\n", sqr1(5+3)); // 64

    int num1 = 25, num2 = 50;
    printf("before swapping num1 = %d , num2 = %d\n", num1 , num2);

    //swap(num1 , num2);

    //2nd way 
    swap1(num1,num2,int);
    printf("after swapping num1 = %d, num2 = %d\n", num1 , num2);
    return 0;
}