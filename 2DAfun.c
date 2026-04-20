//Passing 2-D arrays to function
#include<stdio.h>
void accept_array(int arr[3][3]);
void print_array(int arr[3][3]);
int main(){
    int arr[3][3];
    int i , j;
    accept_array(arr);
    print_array(arr);
    return 0;
}
void accept_array(int arr[3][3]){ //function defintion
    printf("enter the array elemets :\n");
    for(int i = 0; i<3; i++){
        for(int j= 0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}
void print_array(int arr[3][3]){
    printf("array elements are : \n");
    for(int i=0; i<3; i++){
        for(int j = 0; j < 3; j++){
            printf("%4d", arr[i][j]);
        }
    }

}
