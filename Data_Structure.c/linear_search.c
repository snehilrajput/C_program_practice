//linear search
#include<stdio.h>
#define SIZE 9

int comp;
int main(){
    int arr[SIZE] = {33,55,88,77,44,11,66};

    //1.  get the key from the user
    int key;
    int i;
    printf("enter the key: ");
    scanf("%d", &key);
    int index = linear_search(arr, key);
    if(i == -1) //if false from linear search function return to here (main)
        printf("key is not found \n");
    else 
        printf("key found at index%d\n", i)   ;
    printf("comparision =%d\n", comp) ;
    return 0;    
}

int linear_search(int arr[SIZE], int key)  //return type is (int) bcz we want data in int type 
{
    //2. start the traversal 
    for(int i = 0; i < SIZE ; i++){
        //3. compare elements from each elements 
        comp++;
        if(key == arr[i])
        return i;
    }
    return -1; //return false 
}