//char pointer to array 
#include<stdio.h>
int main(){
    char *ptr = "sunbeam";
    char *course[] = {"DAC", "DMC", "DBDA", "DITTIS", "DESD"};
    printf("course[1] = %s\n", course[1]);
    printf("course[3][2] = %c\n", course[3][2]);
    course[1][1] = 'A'; //can not modify the value of course it gives run time error bc String literal is read-only
    printf("course[1]= %s\n ", course[1]);
    printf("BYE\n");

    return 0;

        

}