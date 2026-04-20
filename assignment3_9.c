// 9. Write a program to accept two numbers and find its GCD (greatest common divisor) using
// Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
// 123 % 36 = 15
// 36 % 15 = 6
// 15 % 6 = 3
// 6 % 3 = 0
// GCD = 3
// Input:
// no1: 123
// no2:36
// Output:
// 123 % 36 = 15
// 36 % 15 = 6
// 15 % 6 = 3
// GCD of 123 and 36 is 3#
#include <stdio.h>
int main(){
    int a , b , temp;

    printf("enter two numbers ; ");
    scanf("%d %d", &a , &b);

    while (b != 0){
        printf("%d %% %d\n", a , b , a % b);

        temp = b;           //(Euclidean logic)
        b = a % b;
        a = temp;

}
    printf("GCD = %d\n", a);

    return 0;
   
}