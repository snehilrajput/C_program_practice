#include <stdio.h>

int main(){
   
    int num, a, b, d, e;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    a = num / 10000;        // first digit
    b = (num / 1000) % 10;  // second digit
    d = (num / 10) % 10;    // fourth digit
    e = num % 10;           // last digit

    if (a == e && b == d){
        printf("number is palindrome");
    }
    else {
        printf("not palindrome");
    }
    return 0;
}