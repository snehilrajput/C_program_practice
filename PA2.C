// POINTER ARITHMETIC OPERATION

#include <stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    printf("ptr++ = %p\n", ptr++); //address incresed ,ptr++ = (address of arr[0])
    printf("++ptr = %p\n", ++ptr); //address ++ptr = (address of arr[2])
    printf("*ptr++ = %d\n", *ptr++);//value 
    printf("++*ptr = %d\n", ++*ptr); //value 
    printf("(*ptr)++ = %d\n", (*ptr)++); // value 
    printf("++(*ptr) = %d\n", ++(*ptr)); //value 

    return 0;


}
