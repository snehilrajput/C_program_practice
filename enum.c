#include <stdio.h>

int main(){
    enum days {sun =1, mon, tues , wed, thus, fri, sat};

    enum days day;
    printf("enter day ");
    scanf("%d", &day);

    switch (day)
    {
     case sun: 
            printf("Sunday\n"); 
            break;
        case mon: 
            printf("Monday\n"); 
            break;
        case tues: 
            printf("Tuesday\n"); 
            break;
        case wed: 
            printf("Wednesday\n"); 
            break;
        case thus: 
            printf("Thursday\n"); 
            break;
        case fri: 
            printf("Friday\n"); 
            break;
        case sat: 
            printf("Saturday\n"); 
            break;
        default:
            printf("Invalid day number\n"); 
            break;
    }

    return 0;
}

