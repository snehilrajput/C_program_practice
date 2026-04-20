 //Dynamic memory allocation : malloc 
 #include<stdio.h>
 #include<stdlib.h>
 int main(){
    int num1 = 25; //compile time memory
    int arr[5]; // comiple time memory
    int *ptr = (int*)malloc(sizeof(int)); //4 100 - 104
    *ptr= 25; // *100 = 25
    printf("*ptr = %d\n",*ptr);
    free(ptr); // dangling pointer
    ptr = NULL;
    printf("allocationg memory for array of 5 elements:\n");

    ptr = malloc(sizeof(int)*5); // 100 - 120
    printf("enter the array elements\n");
    for(int i=0; i<5; i++){
        scanf("%d",&ptr[i]); // 
        //ptr+0-> 100+0*4 = 100
        //100+1*4 = 104
        //100+2*4 = 108
    }
    printf("array elements\n");
    for(int i=0; i<5; i++){
        printf("%4d",ptr[i]); // *(ptr+i) 
        //*(ptr+0)-> 100+0*4 = *100
        //*(100+1*4) = *104
        //*(100+2*4) = *108
 }
 free(ptr);
 ptr = NULL;
 return 0;
}