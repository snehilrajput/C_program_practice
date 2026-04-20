//structure syntaxes
struct employee{
    int empid;
    char name[20];
    float salary;
}e1; // e1 is variable of struct employee in Global area/data section

typedef struct student{
    int rollno;
    char name[20];
    float marks;
}std; // std is a another name of struct student

struct {
    int dd;
    int mm;
    int yy;
}d1,d2,d3;  // variables of anonamous struct

typedef struct {
    int dd;
    int mm;
    int yy;
}date; // this is another name of a anonamous struct


#include<stdio.h>
int main(){
    struct employee e2; 
    typedef struct employee emp;//emp is a another name of a struct employee
    emp e3; // by using alis created e3 variable
    std s2; // by using alias created s2 varible
    return 0;
}