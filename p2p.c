//pointer to pointer 
#include <stdio.h>
int main(){
    int num1 = 20;
    int *ptr = &num1;
    int **p_ptr = &ptr;

    printf("num1 = %d\n", num1);    // value of num1 20
    printf("num1 = %d\n", &num1);   //address of num1
    printf("num1 = %d\n", ptr);    //address of num1 
    printf("num1 = %d\n", p_ptr);   //value of p_ptr 
    printf("num1 = %d\n", *ptr);    //value of num1 20
    printf("num1 = %d\n", **p_ptr); //value of num1 20
}