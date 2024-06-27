#include<stdio.h>
int main(){
char st1[50]={"Thummar "};
char st2[50]={"Priyanshi "};
char st3[50]={"N."};
char st4[50];
int k=0;

for(int i=0;st1[i]!='\0';i++,k++){
    st4[k]=st1[i];
}
for(int j=0;st2[j]!='\0';j++,k++){
    st4[k]=st2[j];
}
for(int a=0;st3[a]!='\0';a++,k++){
    st4[k]=st3[a];
}
st4[k]='\0';
printf("%s\t",st4);
return 0;
}
