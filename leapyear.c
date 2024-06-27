#include <stdio.h>
int main(){
int a;
printf("enter the value of a:");
scanf ("%d",&a);
if(a>365){
printf("a is leap year");
}else{
printf("a is not leap year");
}
return 0;
}