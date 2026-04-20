//gets function for accept white space in string

#include<stdio.h>
int main(){
    char str[30];
    printf("enter the string:\n");
    //scanf("%s",&str);
    //scanf("%s",str);
    gets(str);

    printf("str = %s",str);
    return 0;
}