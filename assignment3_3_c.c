#include <stdio.h>

int main(){
    int num, rev = 0, digit; 

    printf("Enter number: ");
    scanf("%d", &num);

    int original = num;

    while (num != 0) {
        digit = num % 10;

        rev = rev * 10 + digit;
      

        num = num / 10;
    }
    printf("reversed %d\n ", rev);


    if (original == rev)
        printf("numeric palindrome");
    else
        printf("not palindrome");    

   return 0;
}