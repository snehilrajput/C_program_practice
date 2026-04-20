#include <stdio.h>

int main(){

    int num , rev = 0 , digit;

    printf("enter number : ");
    scanf("%d", &num);


    while (num != 0) {
        digit = num % 10;        // get last digit
        rev = rev * 10 + digit; // add to reverse
        num = num / 10;         // remove last digit
    
    }
    printf("reversed num is :%d", rev);

    return 0 ;
}