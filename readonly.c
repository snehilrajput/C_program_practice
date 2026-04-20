//RO section
//Pointer to string literal → not modifiable (RO memory)

#include<stdio.h>
int main(){
    char str[] = "sunbeam";
    char *ptr = "sunbeam";
    printf("str = %s\n",str);// sunbeam
    str[3] = 'B'; //*(str+3)
    printf("str = %s\n",str); // sunBeam
    ptr[3] = 'B';
    printf("ptr = %s\n",ptr); // after this line ,program will crash from here so program will not execute "wake up"
    printf("wake up\n");
    return 0;
}