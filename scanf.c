//scanf 

#include<stdio.h>

int main(){
   int num1 = 10;  
   int num2 ;
   char ch ;
   
   printf("enter the number :" );
   scanf("%d", &num2);
   printf("the value of num2 is :%d\n", num2);


   printf("enter the character : ");
   scanf("%*c%c", &ch);
   printf("the value of char is :\n", ch);

   return 0 ;


    
}