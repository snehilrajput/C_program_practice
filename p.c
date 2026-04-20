
#include <stdio.h>
struct sample
{
    int a ;
    char b ;
    float c ;
};
int main()
{
    struct sample s;
    printf("%d,%c,%f",s.a,s.b,s.c);
    return 0;
}