#include<stdio.h>

int main(){
    int num = 10;
    char word = 'A';
    float fl = 1.90;
    double dl = 1.7;

    printf("size of num = %d\n", sizeof(num)); 
    printf("size of int = %d\n", sizeof(int));
    printf("size of word = %d\n", sizeof(word));
    printf("size of char = %d\n", sizeof(char));
   
    printf("size of fl = %d\n", sizeof(fl));
    printf("size of 1.90 = %d\n", sizeof(1.90f));
    printf("size of dl = %d\n",  sizeof(1.7));

    return 0;



}