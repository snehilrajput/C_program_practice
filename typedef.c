#include<stdio.h>

int main(){
    enum {one=3, two , three } e1;
    e1 = two;
    
  typedef enum {snehil, subhi , prachi} names;
  names n1 = snehil;
  names n2 = subhi;
  names n3 = prachi;
  printf("%d %d %d\n",n1, n2, n3);
  printf("%d", e1);

  return 0;



}