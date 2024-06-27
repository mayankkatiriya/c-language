#include <stdio.h>
int main(){
int i;
int n; 
int square;
square=1;
printf("enter number is:");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i%2==0){
 printf("%d\t",i*i);
 }else{
 printf("%d\t",i);
 }
}
return 0;
}
