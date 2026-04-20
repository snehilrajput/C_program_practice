// 20. Write a program to display
// a. Prime numbers between 1 to 100
// b. Armstrong Numbers between 1 to 500

#include<stdio.h>
int main(){
    int i , j  ;
    int isprime ;

    //printf("enter number : ");
    //scanf("%d", &n);
    for (i = 1; i <= 100; i++){
        if (i <= 1)
            
            continue;
            isprime = 1;

    for(int i = 2; i * i<= 100; i++){

        if (j % i== 0){
            isprime = 0;
            break;  

            
        }
        }
    
    if(isprime)
        printf("number is prime");
    else 
        printf("number is not prime ")   ; 
        
        
    }   
    return 0;
}
    

    
