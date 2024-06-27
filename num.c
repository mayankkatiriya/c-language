#include <stdio.h>
int main(){
int n,n1;
printf("enter array length:");
scanf("%d",&n);


int number[n];

for(int i=0;i<n;i++){
printf("enter the element of %d is postion :",i);
scanf("%d",&number[i]);
}
for(int i=0;i<n;i++){
printf("%d\t",number[i]);	

}


printf("\n\nenter array length:");
scanf("%d",&n1);


int number1[n1];

for(int j=0;j<n1;j++){
printf("enter the element of %d is postion :",j);
scanf("%d",&number1[j]);
}
for(int j=0;j<n1;j++){
printf("%d\t",number1[j]);	

}






    return 0;
}










