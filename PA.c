//pointer arithmetic
////ptr++ : pointer is incremented
//++ptr : pointer is incremented
//*ptr++ :pointer is incremented
//++*ptr : value is incremented
//(*ptr)++: value is incremented
//++(*ptr): value is incremented
// (*p)++ → print first, increase later
// ++(*p) → increase first, then print
#include <stdio.h>
int main(){
    int num1 = 25;
    int *ptr = &num1;
    printf("num1 = %d\n", num1); //25
    printf("&num1 = %u\n", &num1); //address num1
    printf("ptr = %u\n", ptr); //address of num1 

    ++*ptr ; //value is incremented
    printf("num1 = %d\n", num1 ); // 26
    printf("&num1 = %u\n", &num1);// address
    printf("ptr = %u\n", ptr); // address

    int num2 = 28;
    int *ptr1 = &num2;
    printf("num2 = %d\n", num2 ); //28
    printf("&num2 = %u\n", &num2);//address
    printf("ptr1 = %u\n", ptr1);//address

    *ptr1++;
    printf("num2 = %d\n", num2); //28
    printf("ptr1 = %u\n", ptr); //address incresed by 4 

    return 0;

}