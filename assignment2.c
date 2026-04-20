// if else 

#include <stdio.h>

int main(){
    int a , b , result;

    printf("Enter numbers a : \n");
    scanf("%d", &a );

    printf("Enter numbers a : \n");
    scanf("%d", &b);

    if (b == 0 ){
        printf("invaild , divided by zero is not allowed %d\n");
    }
        else{
            result = a / b;
            printf("number is divisible %d\n", result );
    }
return 0;
   
}