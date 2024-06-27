#include <stdio.h>
int main(){

char i;
int j ;
for(i='A', j=2;i<='Z';i+=2){
if(j%2==0){
printf("%c",i);
}else{
	printf("%c",i+32);
}
j++;


}
   
   return 0;
   }