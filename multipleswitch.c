#include <stdio.h>

int main(){
    int day;
    printf("Enter the day \n");
    scanf("%d", &day);


    switch (day)
    {
    case 1 : case 2 : case 3 : case 4 : case 5 : case 6 : case 7 :
       printf(" it has 7 days in a week");
        break;
    
    default:
        break;
    }
    return 0;
}
