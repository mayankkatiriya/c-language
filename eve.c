#include <stdio.h>
int main()
{
int i;
int n;
int total=0;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(i%2==0){
		total=total+i;
		
	}
}
printf("total of even number is=%d",total);
	
	
}