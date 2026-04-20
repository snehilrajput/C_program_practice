// Identifiers, Variables
#include<stdio.h>
//int , char,float,double
int main(){
    int num1; // declaration
    num1 = 25; // assignment
    int num2 = 50; // initialization

    char ch = 'A';
    float fvar = 1.2;
    double dvar = 3.5;

    printf("The value of num1 = %d\n",num1); //%d is the FS of int
    printf("The value of ch = %c\n",ch); // %c is the FS of char
    printf("The value of fvar = %.2f\n",fvar); // %f is the FS of float
    printf("The value of dvar = %.2lf\n",dvar); // %lf is the FS of double

    return 0;


}