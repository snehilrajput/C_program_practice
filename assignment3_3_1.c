#include <stdio.h>

int main(){
    
    int num , sum=0;

    printf("Enter 5 numbers:\n");

    for(int i = 1; i <= 4; i++) {
        scanf("%d", &num);
        sum += num;
}
    printf("sum = %d", sum);

return 0;

}   