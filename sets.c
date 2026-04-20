#include<stdio.h>
int main(){
    char str[40];
    printf("enter the string:\n");
    //scanf("%[^A-Z]",str); //it will stop scanning when encounterd with A-Z
    //scanf("%[A-Z]",str); // it will scan A-Z
    //scanf("%[^0-9]",str);
     scanf(" %[^0-9]", str);
 
     printf("str = %s\n",str);

     return 0;
}

