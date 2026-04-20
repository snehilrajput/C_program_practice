//union example
#include<stdio.h>
typedef struct student{
    char name[20];
    int rollno;
    int std;
    union result{
        char grade;
        float marks;
    }res;

}stu;//another name of struct student
int main(){
    stu s1; //variable of struct student
    printf("enter name , rollno, std:\n");
    scanf("%s %d %d", &s1.name,&s1.rollno,&s1.std);


    if(s1.std >= 1 && s1.std <= 4){
        printf("enter the grade\n");    //scaning process
        scanf("%*c%c", &s1.res.grade);
    }
    else{
        printf("enter the marks\n");
        scanf("%f", &s1.res.marks);
    }
    printf("name = %s\nrollno = %d\nstd = %d\n",s1.name,s1.rollno,s1.std);


    if(s1.std >= 1 && s1.std <= 4){
        printf("grade = %c\n", s1.res.grade);  //printing process
    } 
    else{
        printf("marks = %.2f\n", s1.res.marks);

    }
return 0;
}