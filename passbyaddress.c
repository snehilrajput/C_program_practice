#include<stdio.h>
void swap(int *ptr1, int *ptr2);
int main(){
    int num1 = 25, num2 = 55;
    printf("before swapping num1 = %d num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("after swapping num1 = %d num2 = %d\n", num1 , num2);
    return 0;
}

void swap(int *ptr1, int *ptr2){
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}



