#include <stdio.h>

int main(){
    int month ;
    int days ;
    int year;
    printf("enter month :");
    scanf("%d", &month);
    
   
    printf("enter year : ");
    scanf("%d", &year);

    if (month == 1|| month == 3|| month == 5|| month == 7 || month == 8 ||month == 9 || month == 11) {
        days = 31 ;
        printf("%d", days);
    }
      else if (month == 4|| month == 6|| month == 10|| month == 12 ) {
        days = 30;
        printf("%d", days);
       }
    
    else if (month == 2) {
        // Leap year check
        if (year % 400 == 0) {
            days = 29;
        }
        else if (year % 100 == 0) {
            days = 28;
        }
        else if (year % 4 == 0) {
            days = 29;
        }
        else {
            days = 28;
        }
        printf("Days = %d", days);
    }
    else {
        printf("Invalid month");
    }
    return 0;
}