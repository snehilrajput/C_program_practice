//pass by value 
#include <stdio.h>
void swap(int n1, int n2);
int main(){
    int num1 = 25, num2 = 50;
    printf("before swapping num1 = %d num = %d\n", num1, num2);
    swap(num1 , num2);
    printf("after swapping num1 = %d num2 = %d\n", num1, num2);
    return 0;

}

void swap(int n1, int n2){
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;

}