// pointer
// 32 bit complier : 4 bytes or 64 but compiler 8
#include<stdio.h>
int main(){
    int a = 20;
    int *ptr = &a;
    
    char ch = 'B';
    char *c_ptr = &ch;

    float fvar = 1.9f;
    float *f_ptr = &fvar;

    double dvar = 9.6;
    double *d_ptr = &dvar;

    printf("sizeof ptr = %u\n", sizeof(ptr)); //4
    printf("sizeof c_ptr = %u\n", sizeof(c_ptr)); //4
    printf("sizeof f_ptr = %u\n", sizeof(f_ptr)); //4
    printf("sizeof d_ptr = %u\n", sizeof(d_ptr)); //4

    return 0;
    }