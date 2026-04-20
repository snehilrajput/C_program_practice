//predefined string functions
//strlen,strcmp,strcpy,strchr,strstr,strrev,strlwr,strupr,strcat,strncat
#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "Sunbeam Info";
    char str2[30];

    printf("lenght of str1 = %u\n", strlen(str1)); //strlen retuns total length excluding \0
    //and sizeof including \0