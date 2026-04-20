#include <stdio.h>

int main(){
    int num ;
    char ch ;

    printf("enter a character : ");
    scanf("%c",&ch);

    printf("ASCII value of : %c\n", ch);
    printf("Decimal :%d\n ", ch);
    printf("octal : %o\n ", ch);
    printf("hexadecimal : %x\n", ch);

    printf("\n enter ASCII value :");
    scanf("%d", &num);
    printf("character for ASCII value is %C", num);

    return 0;

}