// Returning structure from the function
#include<stdio.h>
struct date{
    int dd;
    int mm;
    int yy;
};
struct date accept_data();
void print_data(struct date d2);

int main(){
    struct date d = accept_data();
    print_data(d);
}
struct date accept_data(){
    struct date d1;
    printf("enter the date:\n");
    scanf("%d%d%d",&d1.dd,&d1.mm,&d1.yy);
    return d1;
}
void print_data(struct date d2){
    printf("DATE:\n");
    printf("%d-%d-%d",d2.dd,d2.mm,d2.yy);
}