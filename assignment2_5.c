#include <stdio.h>

int main(){
    /*int a ,  b , c; 
printf("enter numbers :\n");
scanf("%d %d %d", &a , &b, &b);

    if (a > b ){
        printf("maximum %d", a);
    }
    else if(b > a)
        printf("maximum %d", b);
    
    else
        printf("maximum %d", c);
    
    return 0;


} */

int a = 30 , b = 40, c = 100;
    //
    int max =  a > b ? (a > c ? a : c ): (b> c ? b : c);
    printf("maximum number is: %d", max);

return 0; 
} 