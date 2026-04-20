// without using logical operator

#include<stdio.h>

int main(){
    
    int year ;
    printf("Enter year : ");
    scanf("%d", &year);

    //a > b ? printf("a is greater\n") : printf("b is greater\n");
    //int max = a > b ? a : b;
 
    (year % 400 == 0)? printf("%d year is leap year", year):
    (year % 4 == 0)? printf("%d year is leap year", year):
    (year % 100 != 0)? printf("%d year is not leap year", year):
                        printf("year is not leap year %d", year);

    return 0;
}