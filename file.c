#include<stdio.h>
int main(){
    FILE*pri;
    char string[20];
    pri=fopen("abc.txt","a");
    gets (string);
    fprintf(pri,"%s",string);

    fclose(pri);
    return 0;
}
