//String comparison
#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "Sunbeam"; // ascii value of S= 83
    char str2[] = "sunbeam"; // ascii value of s = 115

//     if(str1 == str2){                       //== Not Equal (addresses different)
//         printf("strings are equal\n");
//     }
//     else{
//         printf("strings are not equal\n");
//     }

// }

int result = strcmp(str1,str2);   //83 - 115 = -32
printf("result = %d\n ", result);

if(result == 0){
    printf("strings are equal\n");
}
else if (result > 0){
    printf("str1 is greater\n");

}
else{
    printf("str2 is greater\n");   // so result is str2 is greater
}
return 0;
}


//strcmp : returns 0,1,-1
//         0 = if strings are equal
//         1 = if string 1 is greater
//        -1 = if string 2 is greater

