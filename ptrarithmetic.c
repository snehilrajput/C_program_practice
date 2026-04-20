//pointer arithmetic

#include <stdio.h>
int main(){
    int num1 = 20;
    int *ptr = &num1;
    printf("num1 = %d\n", num1);
    printf("&num1 = %u\n", &num1);
    printf("ptr = %u\n", ptr);

    ptr++;  //address + 1 not value 
    printf("ptr = %u\n", ptr); // address * 4

    char ch = 'A';
    char *ptr1 = &ch;

    printf("ch = %c\n", ch); //A
    printf("&ch = %u\n", &ch); //
    printf("ptr1 = %u\n", ptr1);
    ptr++;
    printf("ptr1= %u\n", ptr); //address * 1 bcz (char = 1byte)

    return 0;


}