#include<stdio.h>
void area(){

float Pie=3.14;
int r=20;
int total;
total=Pie*r*r;
printf("area of circle is :%d",total);
}
int area1(){

float Pie=3.14;
int r=20;
int total;
total=Pie*r*r;
return total;
}
int main(){
    area();
    int total;
    total=area1();
    printf("area of circle is :%d",total);
    return 0;

}





    
