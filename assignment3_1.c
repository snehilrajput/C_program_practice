#include <stdio.h> 

int main(){
    char ch;
    int n, i;

    printf("enter character :");
    scanf("%c", &ch);

    printf("enter number :");
    scanf("%d", &n);

    for(i=1 ; i<=5 ; i++){
        printf("%c", ch);
    }
    printf("\n");

    return 0;

    
}