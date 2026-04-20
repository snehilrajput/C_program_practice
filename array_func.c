//arrays in function 

#include<stdio.h>
void accept_array(int arr[5]);
void print_array(int arr[5]);
int main(){
    int arr[5];
    accept_array(arr);
    print_array(arr);

    return 0;
}

void accept_array(int arr[5]){
    printf("enter the array elements : \n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);

    }

}
void print_array(int arr[5]){
    printf("array elements : \n");
        for(int i = 0; i < 5; i++){
            printf("%4d", arr[i]);
        }

    printf("\n");
    printf("size of arr = %d\n", sizeof(arr));

}
    

