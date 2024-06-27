#include<stdio.h>
int main(){
  int a=20;
  int b=50;
  int*c;
  int*d;
 c=&a;
 d=&b;
   *c=*c+*d;
   *d=*c-*d;
   *c=*c-*d;
   printf("after swapping :\n %d \n %d\n",*c,*d);

   







    return 0;
}