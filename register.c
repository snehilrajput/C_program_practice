//storage classes: auto, register variables
// Local 
//storage : stack
//scope: block
//default value: Garbage 
//life : block
#include<stdio.h>
int main(){
    int num1 =10;
    printf("num1 = %d\n",num1);//10
    register int num2 = 20;
}
void fun(){
    //printf("num1 = %d\n",num1);
}
//Register
//storage : cpu registers/stack
//scope: block
//default value: Garbage 
//life : block
