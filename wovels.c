#include <stdio.h>
int main(){
int wovels;
char c;

printf("enter the wovels:");
scanf("%c",&c);

int lower=(c=='A' || c=='E' || c=='I' ||c=='O' || c=='U');
int upper=(c=='a' || c=='e' || c=='i' ||c=='o' || c=='u');
if(lower || upper){
	printf("c is vowels");
}else{
	printf("c is constant");
}
return 0;










}