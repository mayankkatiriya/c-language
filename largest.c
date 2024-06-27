#include <stdio.h>
int main(){
int a;
int b;
int c;
printf("enter the value of a:");
scanf ("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
scanf("%d",&c);
if(a>b>c){
	printf("a is large");
}else{
	printf("b is large");
	printf("c is large");
}
return 0;
}