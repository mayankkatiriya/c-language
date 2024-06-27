#include<stdio.h>
int mani(){
    int a,b;
    char operator;

 
  printf("enter the operator :");
 scanf("%c",&operator);

  printf("enter number a:");
  scanf("%d",&a);

 printf("enter number b:");
 scanf("%d",&b);



switch(operator){

case '+':
printf("the sum is : %d",a+b);
break;

case '*':
printf("the sum is : %d",a*b);
break;
 
 default:
 printf("error");
}
return 0;
}





