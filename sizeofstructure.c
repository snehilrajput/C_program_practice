//size of structure 
#include<stdio.h>
#pragma pack(1) //with the use of this we can minimize the size of memory 
struct student {
    int rollno ; //1 1 1 1
    char name[20];//20 1;s // without #pragma size will be 28 bcz slot will distributed into 4 4 bytes 
    char grade ;//1

};

int main(){
    struct student s1;
    printf("sizeof struct = %u\n", sizeof(s1));
    printf("sizeof struct = %u\n", sizeof(struct student));
    return 0;


}
