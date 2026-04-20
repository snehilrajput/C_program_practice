//calloc, realloc
//calloc → allocate+zero → fill data → realloc → expand → fill new → free

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr = (int*)calloc(5,sizeof(int)); //(n, size)
    if(ptr == NULL){
        printf("memory is not allocated\n");
    }
    else{
        printf("array elements : \n");
        for(int i = 0; i<5; i++){
            ptr[i] = i + 10; //ptr[0] = 0+10 = 10 , ptr[1] = 11, 
            // 10,11,12,13,14 explicitly allocate


        }
    }
    printf("array elements :\n");
    for(int i=0; i<5; i++){
        printf("%4d\n",ptr[i] ); // same as *(ptr + i)
    }
    //realloc for adding extra memory after ptr[4] in the calloc(if memory needed)

    ptr = (int*)realloc(ptr, sizeof(int)*7);
    ptr[5] = 15; // *(ptr+5) = *(100+5*4) = *120
    ptr[6] = 16; // *(ptr+6) = *(100+6*4) = *124

    printf("array elements after realloc\n");
    for(int i=0; i<7; i++){
        printf("%4d", ptr[i]);
    }
    free(ptr);
    ptr = NULL;
    return 0;
}