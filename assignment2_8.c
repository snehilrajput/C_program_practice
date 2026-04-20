#include <stdio.h>

int main(){
    int quantity ;
  
    printf("enter quantity :");
    scanf("%d", &quantity);

    float total;
    float price = 5;
    total = quantity * price;
  
    if (quantity > 30 ){
        total = total - (total * 10/100);   // 10% discount
    }
    if (quantity > 50 ){
        total = total - (total * 15/100);   // 15% discount
    }
   printf("Total amount = %.2f\n", total);

   return 0;

    }
