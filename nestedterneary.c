// nested terneary

#include<stdio.h>

int main(){
    int a = 20 , b = 90 , c = 80;
    
    int maxx = a > b ? (a > c ? a : c ): (b> c ? b : c);

    printf("%d", maxx);

    return 0;
}