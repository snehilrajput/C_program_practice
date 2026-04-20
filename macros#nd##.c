//macros : # , ##
//# — Stringizing Operator
// ## — Token Pasting Operator
#include<stdio.h>
#define printf(a, b) printf(#a "=%d"  #b "=%d\n", num1, num2)
#define demo(a , b) printf("\n%d", a##b)
int main(){
    int num1 = 25 , num2 = 49; 
    printf(num1 , num2);

    int basic = 10000 , sal = 20000 , basicsal = 50000;
    demo(basic, sal);

}   