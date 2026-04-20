#include<stdio.h>

int main(){
    int num1 = 26;
    char ch = 'A';
    int *ptr ;
     //wild pointer its dangeous bcz it stores address of another variable some times it crash code also 
    int *ptr1 = NULL; // num pointer , default value is '0'
    void *ptr2 = NULL; //void pointer 

    ptr2 = &num1 ;
    printf("num1 = %d\n", num1);          //26
    printf("num1 = %d\n", *(int * )ptr2); //26

    ptr2 = &ch;                           
    printf("num1 = %d\n", ch);            //65
    printf("num1 = %d\n", *(char * )ptr2);//65


return 0;
}