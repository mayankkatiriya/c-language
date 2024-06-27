#include<stdio.h>
struct student
{
    int rollno;
    int marks[3];
    int total;
    float percentage;
  
};
int main(){
    struct student st[3];
    for(int i=1;i<=3;i++)
    {
     st[i].total=0;
      st[i].percentage=0.0;
     printf("enter %d student details :\n",i);
     st[i].rollno=i;

     for(int j=0;j<3;j++){
        printf("enter marks :");
        scanf("%d",&st[i].marks[j]);
     }
     for(int j=0;j<3;j++){
         printf("%d\n",st[i].marks[j]);
         st[i].total+=st[i].marks[j];
        

     }
      st[i].percentage=st[i].total/3;
     printf("total marks %d\n",st[i].total);
      printf("percentage %f\n",st[i].percentage);
      
      
    }
          return 0;
}