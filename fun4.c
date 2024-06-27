#include<stdio.h>
void area(){

int P=30;
int h=20;
int r=6;
int total;
total=P*r*h;
printf("simple intrest is :%d",total);
}
int area1(){

int P=30;
int h=20;
int r=6;
int total;
total=P*r*h;
return total;
}
int main(){
    area();
    int total;
    total=area1();
    printf("simple intrest is :%d",total);
    return 0;

}