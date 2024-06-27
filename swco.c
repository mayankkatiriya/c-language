#include<stdio.h>
int main(){
 int n;
 do{
    printf("enter the first number :\n");
    printf("enter the second number :\n");
    printf("enter the third number:\n");
    printf("enter the fourth number :\n");

    printf("enter your choice :\n");
    scanf("%d",&n); 
 
    switch(n){
    case 1:
    printf("value is 5\n");
    break;
    
    case 2:
    printf("value is 6\n");
    break;

     case 3:
     printf("value is 15\n");
     break;

      case 4:
      printf("value is 20\n");
      break;

      default:
      printf(" error\n");
 }
 }
 while(1<=4);

 return 0;
}