//char 2D Array and size 
// char 2-D Array and size
#include<stdio.h>
int main(){
    char str[] = "sunbeam"; // 1D array
    char depts[][50] = {"HR","sales","marketing","training"};
    printf("depts[1] = %s\n",depts[1]);// sales0
    printf("depts[2][3] = %c\n",depts[2][3]); //array notion
    printf("*(*(depts+2)+3)= %c\n",*(*(depts+2)+3)); // pointer notation
    printf("*(*(depts+2)+3)+2= %c\n",*(*(depts+2)+3)+2); //k increased by 2 laters 'm' 
    printf("size of(depts) = %u\n",sizeof(depts)); // 200 (50 * 4 (colum))
    printf("size of(depts[1]) = %u\n",sizeof(depts[1])); //50
    printf("size of(depts[1][2]) = %u\n",sizeof(depts[1][2])); //1 bcz [2] denote character size so char 1 bytes
    printf("size of(depts[7]) = %u\n",sizeof(depts[7])); // 50  

    return 0;

} 