//Recursion 
// addtion of 1 to 10 

#include <stdio.h> 

int my_sum(int n1);
int main(){
    int n1 = 10;
    int result = my_sum(n1);
    printf("result = %d\n ", result);
    return 0;

}

int my_sum(int n1){
    if(n1 > 0) // base condition
    return n1 + my_sum(n1-1);
    return 0;
}