#include<stdio.h>
int getsdata(){
  
    int total;
    
    int eng,maths;
    printf("enter the eng marks :");
    scanf("%d",&eng);
     printf("enter the maths marks :");
      scanf("%d",&maths);
    total=eng+maths;
   
    return total;
}
float perr(){
     int total;
     float per=0.0;
    total=getsdata();
    printf("total %d\n",total);
    per=total/2;
    return per;

}
void showdata(){
    
     float per=0.0;
   per=perr();
    printf("per %f\n",per);
    . 
}
int main(){
     showdata();
    return 0;
}