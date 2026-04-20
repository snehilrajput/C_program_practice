//terneary operator

#include<stdio.h>

int main(){
    int a = 50, b = 80;
    a > b ? printf("a is greater\n") : printf("b is greater\n");
    int max = a > b ? a : b;
    printf("max = %d\n", max);

    return 0;

}