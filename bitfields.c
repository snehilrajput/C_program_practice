//bitfields 
#include<stdio.h>
#pragma pack(1)
int main(){
    struct person{
        char name[20];
        unsigned int age :31;
        unsigned int gender :1; //total 20 + 4 bytes asigned 
        char floor;
    };
    struct person p1;
    printf("size of struct person: %d\n", sizeof(p1));
return 0;    
}