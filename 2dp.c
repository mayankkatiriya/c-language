#include <stdio.h>
int main(){
    int u=0,l=0,d=0;
    int
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("enter the raws and column :",i,j);
        scanf("%d",&arr[i][j]);
    }
    }

 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
  if(i<j){
    u=u+arr[i][j];
  }else if(i>j){
    l=l+arr[i][j];
  }else{
  d=d+arr[i][j];
  }

  }
 printf("\n");
    }
   
    
    printf("sum of upper tringle is %d",u);
    printf("sum of lower tringle is %d",l);
    printf("sum of diogonal is %d",d);

 

return 0;

}