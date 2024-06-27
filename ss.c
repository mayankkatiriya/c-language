#include <stdio.h>
int main(){
int i,n,j;


int number=1;


for(i=1;i<=5;i++){
for(j=1;j<=5;j++){
	
	
printf("%d\t",number);
number++;
}


printf("\n");
number+=5;
}


return 0;
}