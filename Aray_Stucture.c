// Array structure 
#include<stdio.h>
#define SIZE 3 
// with the help of #define keyword we can change the values at any time suppose we want to expand size by 4 then we can easily
struct student{
    int rollno ; 
    char name[20];
    float marks;
};
int main(){
    struct student std[SIZE];
    printf("enter the student data:\n");
    for(int i = 0; i<SIZE; i++){
        printf("Student %d\n ", i+1) ;//i+1 (just show the result student 1 student 2)
        printf("enter the rollno:\n");
        scanf("%d", &std[i].rollno);

        printf("enter name :\n");
        scanf("%s", &std[i].name);

        printf("enter the marks:\n");
        scanf("%f", &std[i].marks);

    }
    printf("student details are :\n");
    for(int i =0 ; i<SIZE; i++){
        printf("rollno =%d\n name = %s\n marks = %.2f\n", std[i].rollno,std[i].name,std[i].marks);
    }
    return 0;
}




