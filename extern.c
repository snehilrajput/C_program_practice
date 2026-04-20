// Global variable , Extern(Keyword)
//storage : Data section
//scope : tThroughout the program
//default value: 0
// life: Throughout the program
#include<stdio.h>
void fun();
int num1;
extern int num2;
int main(){
    //int num1 = 10;
    printf("num1 in main =%d\n",num1);// 0
    printf("num2 = %d\n",num2);
    fun();
    return 0;
}
int num2 = 25;
void fun(){
    num1 = num1+2;
    printf("num1 in fun = %d\n",num1);

}
