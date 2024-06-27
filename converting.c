#include <stdio.h>
int main()
{
	int a;
char word;
printf("enter the char");
scanf("%c",&word);
if(65<=word && word<=90){
	printf("%c",word+32);
}else{
	printf("%c",word-32);
}
return 0;
}