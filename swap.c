#include <stdio.h>
int main(){
int a;
int b;
printf("enter the a of value");
scanf("%d",&a);
printf("enter the b of value");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping\n a=%d\t b=%d",a,b);
return 0;
}