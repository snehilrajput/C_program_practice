//logical operator 

#include <stdio.h>

int main(){
    int num1 = 0;
    int num2 = -27;

    int result = num1 && num2;
    printf("result = %d\n ", result);  //0 && -27


    result = num1 || num2 ;
    printf("result = %d\n ", result);

    result = !num1;
    printf("result = %d\n ", result);

    result = !num2;
    printf("result = %d\n ", result);

return 0;




}