//Printing data using array and pointer notation
#include<stdio.h>
int main(){
    int arr[3][3] = {11,22,33,44,55,66,77,88,99};
    printf("arr[1][0] = %d\n",arr[1][0]); //  44 array notation
    printf("*(*(arr+1)+0) = %d\n",*(*(arr+1)+0)); //pointer notation
    printf("**(arr+1) = %d\n",**(arr+1)); // pointer notation
    printf("**(arr+1)+1 = %d\n",**(arr+1)+1); //value incresed by 1 = 45

    printf("arr[2][0] = %d\n",arr[2][0]); //  77  Array notation
    printf("*(*(arr+2)+0) = %d\n",*(*(arr+2)+0)); //pointer notation
    printf("**(arr+1) = %d\n",**(arr+2)); // pointer notation

    printf("arr[0][0] = %d\n",arr[0][0]); //  11 rray notation
    printf("*(*(arr+0)+0) = %d\n",*(*(arr+0)+0)); //pointer notation
    printf("**(arr) = %d\n",**(arr)); // same ans pointer notation
     printf("**arr+2 = %d\n",**arr+2); // 13 ,value increased by 2  
}
