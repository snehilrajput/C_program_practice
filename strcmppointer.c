//String comparision using pointer variable
#include<stdio.h>
int main(){
    char *ptr1 = "sunbeam";
    char *ptr2 = "sunbeam";

    if (ptr1 == ptr2){                   //it compare address and strcmp compare character (imp)
        printf("strings are equal\n");   //Never use == for string comparison in C
    }
    else{
        printf("strings are not equal\n");
    }
    return 0;
}