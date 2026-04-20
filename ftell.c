// ftell(file pointer position),  fgetc, fseek(SEEK_SET,SEEK_CUR,SEEK_CUR,SEEK_END) functions
#include<stdio.h>
int main(){
    FILE *ptr = fopen("sun.txt","r");
    char ch;
    printf("position of a pointer = %d\n",ftell(ptr));

    fseek(ptr,3,SEEK_SET);
    ch = fgetc(ptr);
    printf("ch = %c ,position of a pointer = %d\n",ch,ftell(ptr));

    fseek(ptr,5,SEEK_CUR);
    ch = fgetc(ptr);
    printf("ch = %c ,position of a pointer = %d\n",ch,ftell(ptr));

    fseek(ptr,-4,SEEK_CUR);
    ch = fgetc(ptr);
    printf("ch = %c ,position of a pointer = %d\n",ch,ftell(ptr));

    fseek(ptr,-4,SEEK_END);
    ch = fgetc(ptr);
    printf("ch = %c ,position of a pointer = %d\n",ch,ftell(ptr));





 }