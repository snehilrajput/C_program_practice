//function parameter execution 

#include<stdio.h>
int main(){
    int num1 = 10;
    int *ptr = &num1;

    printf("num1 = %d\n ++*ptr = %d\n",num1,++*ptr);//11 11

    return 0;
}
