// Switch Case
#include<stdio.h>
int main(){
    int num1, num2, choice;
    printf("Enter the values of num1, num2\n");
    scanf("%d%d",&num1,&num2);

    printf("1.Addition\n2.subtraction\n3.multiplication\n4.division\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch(choice){
        case 1: 
            printf("Addition = %d\n",num1+num2);
            break;

        case 2:
            printf("Subtraction = %d\n",num1-num2);
            break;
        case 3:
            printf("multiplication = %d\n",num1*num2);
            break;
        case 4:
            printf("Division = %d\n",num1/num2);
            break;

        default :
            printf("Invalid choice\n");
        

    }
    return 0;
}