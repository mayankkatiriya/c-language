#include<stdio.h>
void area(){

int w=40;
int h=20;
int total;
total=w*h/2;
printf("area of tringle is :%d",total);
}
int area1(){

int w=40;
int h=20;
int total;
total=w*h/2;
return total;
}
int main(){
    area();
    int total;
    total=area1();
    printf("area of tringle is :%d",total);
    return 0;

}