#include<stdio.h>
void area(){

int l=12;

int total;
total=l*l;
printf("area of square is :%d",total);
}
int area1(){

int l=12;
int total;
total=l*l;
return total;
}
int main(){
    area();
    int total;
    total=area1();
    printf("area of square is :%d",total);
    return 0;

}