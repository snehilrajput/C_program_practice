//write A function to calculate factorial of a given number 
#include<stdio.h>
int fact(int n);
int main(){
    int n =4;
    int result ;

    result = fact(n);

    printf("Factorial of %d = %d\n", n, result);
    return 0;
}
int fact(int n){
    
    int f = 1;
    for(int i=1; i <=n; i++){
        f = f * i;
    }
  return f;

}

