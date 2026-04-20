//pointer notaion in 2d array
#include<stdio.h>
int main(){
    int arr[3][3] = {11, 22, 33 ,44, 55, 66, 77, 88, 99};
    printf("arr[1][2]= %d\n", arr[1][2]); // 66
    printf("*(*arr+1)+2) = %d\n", *(*(arr+1)+2)); //asking in exam 

    printf("arr[2][2] = %d\n , arr[2][2]"); //99 array notaion
    printf("*(*(arr+2)+2) = %d\n",*(*(arr+2)+2)); //99 pointer notation

    printf("arr[0][2] = %d\n",arr[0][2]); // 33 array notation
    printf("*(*(arr+0)+2) = %d\n",*(*(arr+0)+2));//33 pointer notation

return 0;
    }