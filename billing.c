#include <stdio.h>
int main(){
int a;
int total;
int unit;
printf("enter the unit consume");
scanf("%d",&unit);
if(unit<=100){
	total=unit*0.60+50;
}else if(100<a && a<=200){
	total=unit*0.80+50;
}else if(200<a && a<=300){
	total=unit*0.90+50;
}else{
	printf("bill failed");
}


if(total>300){
	total=total*15/100+total;
}else{
	printf("total bill %d" , total);
}

return 0;
}