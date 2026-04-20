#include<stdio.h>

int main(){
int a ,  b; 
printf("enter numbers :\n");
scanf("%d %d", &a , &b);

    if (a > b ){
        printf("maximum %d", a);
    }
    else{
        printf("maximum %d", b);
    }
      
    return 0;

}

    /*int a = 30 , b = 40;
    //
    int max = a > b ? a : b ;
    printf("maximum number is: %d", max);

return 0; 
} */