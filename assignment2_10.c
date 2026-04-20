#include <stdio.h>

int main(){
    char ch ;

    printf("enter character :");
    ch = getchar(); // if you want take single character 

    if (ch >= 'A' && ch <= 'Z'){
        printf("uppercase alphabets");
    }
   else if (ch >= 'a'&& ch <= 'z'){
        printf("lowercase alphabets");
   }
   else if (ch >= '0'&& ch <= '9'){
         printf("digits");
   }
   else if (ch == ' ')
        printf("Space\n");
    else if (ch == '\t')
        printf("Tab\n");
    else if (ch == '\n')
        printf("Newline\n");
   else {
    printf("not listed above");
}
    return 0;
   }
