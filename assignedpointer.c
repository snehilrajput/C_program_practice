#include<stdio.h>

int main(){
    int num1 = 500;
    char *ptr = &num1;

    printf("num1 = %d\n",num1);// 500
    printf("*ptr = %d\n",*ptr);// -12

    return 0;

}