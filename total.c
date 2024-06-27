#include <stdio.h>
int main(){
int i;
int n; 
int total;

total=1;
printf("enter number is:");
scanf("%d",&n);
for(i=1;i<=n;i++){


printf("%d\t",total*i);
total=total*2;

}
return 0;
}
