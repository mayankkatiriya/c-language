#include<stdio.h>
void intrest(int r,int p,int t){
    printf("total intrest is : %d\n",r*p*t/100);
}
    int intrest1(int r, int p,int t){
        return r*p*t/100;
}
int main(){
    intrest(10,20,5);
    int total;
    total=intrest1(5,5,4);
    printf("total intrest is :%d\n",total);
    return 0;
}