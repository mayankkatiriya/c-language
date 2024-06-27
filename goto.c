#include<stdio.h>
int main(){
    for(int i=0;i<20;i++){
        if(i==15){
            goto next;
        }
        printf("%d\t",i);
    }
    next:
    for(int j=21;j<51;j++){
        printf("%d\t",j);
    }
    return 0;
} 