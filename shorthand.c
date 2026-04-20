//short hand operators 

#include <stdio.h>

int main(){
    int num1 = 20;
    int num2 = 30;

    printf("before operation num = %d, num2 = %d\n", num1 , num2);
    num1 += num2;

    printf("after opeartion num1 = %d num2 = %d\n", num1, num2);// 50 30

    num1 -= num2;
    printf("num1 = %d, num2 = %d\n", num1, num2); // 
}