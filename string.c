//sizeof and strlen
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "sunbeam";
    printf("size of str = %u\n",sizeof(str)); //8
    printf("length of str = %u\n",strlen(str));//7 

    // strlen is a function fron string.h
    // it returns length excluding '\0'

    char str2[] = "sunbeam\0info";
    printf("size of str2 = %u\n",sizeof(str2)); //13
    printf("length of str2 = %u\n",strlen(str2));//7

    return 0;
}