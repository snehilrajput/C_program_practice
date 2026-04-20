//changing value 

#include <stdio.h>
int main(){
    int num1 = 60;
    int *ptr = &num1;

    printf("num1 = %d\n", num1);//60
    printf("&num1 = %u\n" , &num1);//address
    printf("ptr = %u\n", ptr);//address of num1
    printf("&ptr = %u\n", &ptr);//address of ptr bcz ptr has its own address and ptr holds address of variables
    *ptr = 90;
    printf("ptr = %u\n ", *ptr);//90
    printf("num1 = %d\n", num1);//90
}