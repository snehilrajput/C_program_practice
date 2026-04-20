// Switch case with character
// Switch Case
#include<stdio.h>
int main(){
    int num1, num2;
    char choice;
    printf("Enter the vlaues of num1, num2\n");
    scanf("%d%d",&num1,&num2);

    printf("+\n-\n*\n/\n");
    printf("Enter your choice\n");
    scanf("%*c%c",&choice);

    switch(choice){
        case '+': 
            printf("Addition = %d\n",num1+num2);
            break;

        case '-':
            printf("Subtraction = %d\n",num1-num2);
            break;
        case '*':
            printf("multiplication = %d\n",num1*num2);
            break;
        case '/':
            printf("Division = %d\n",num1/num2);
            break;

        default :
            printf("Invalid choice\n");
        

    }
    return 0;
}