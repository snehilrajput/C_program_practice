#include<stdio.h>



int main(){
    int num1 = 100; // decimal base 10 
    int num2 = 0100; // octal base 8
    int num3 = 0X100; // hexadecimal base 16

    printf("num1 = %x\n",num1); 
    printf("num2 = %d\n",num2);
    printf("num3 = %o\n",num3);

    return 0;

}