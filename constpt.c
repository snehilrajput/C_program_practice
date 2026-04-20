//const pointer
#include<stdio.h>
int main(){
    const float PI = 3.14;
    //float const PI = 3.14; 

    const float * const fptr = &PI;
    //float const *fptr = &PI
    
    printf("PI = %.2f\n",PI);//3.14
    
    float fvar = 10.2;
    //fptr = &fvar;


   // *fptr = 2.14;
    //PI = 2.14;
    

    return 0;
}