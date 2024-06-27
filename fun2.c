#include<stdio.h>
void area(){

int w=30;
int h=12;
int total;
total=w*h;
printf("area of rectangle is :%d",total);
}
int area1(){

int w=30;
int h=12;
int total;
total=w*h;
return total;
}
int main(){
    area();
    int total;
    total=area1();
    printf("area of rectangle is :%d",total);
    return 0;

}