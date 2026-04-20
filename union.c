//Union
//in union memory will provide in shared manner so previous data will overwrite to the next one
#include<stdio.h>
union test{
    int num1;
    double d;
    char ch;
};
int main(){
    union test t1;
    printf("size of union =%d\n", sizeof(t1));
    t1.num1 = 30;
    printf("num1 = %d\n", t1.num1); //30
    t1.ch = 'A';
    printf("ch = %c\n", t1.ch); //A 
    printf("num1 =  %d\n", t1.num1);//65 data overwritten
}