//2D array 
// for this refer diagram for exam
#include<stdio.h>
int main(){
    int i , j;
    int arr[5] = {11, 22, 22, 33, 44}; // 1D array

    int arr1[3][2] = {11,22,33,44,55,66}; //2*3 = 6 elements
    printf("arr[1][1] = %d\n", arr1[1][1]); //44

    int arr3[3][3] = {{11,22} , {30}, {40,50,60}}; //sets of elements other will be 0
    int arr4[3][4] ;//decaration
    int arr5[][3] = {1,2,3,4,4,5}; // column is compulsory row is created by using column

    int arr2[3][3] = {11,22,33,44,55}; //total 9 elements and other elements will be 0 
    printf("array elements are : \n");
    for(int i = 0 ; i < 3; i++){
        for(int j = 0 ; j < 3; j++){
            printf("%4d", arr2[i][j]);
        }
        printf("\n");
    }
return 0;
  

    
 }