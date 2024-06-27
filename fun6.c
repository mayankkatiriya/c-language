#include<stdio.h>
void pattern(int a,int b){
char i,j;
char c='A';
 for(int i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        if(i%2==0){
        printf("%c\t",c+32);
    }else{
        printf("%c\t",c);
    }
    c++;    
 }
 printf("\n");
 }}
 int main(){
    pattern(65,90);
 
 return 0;
 }

