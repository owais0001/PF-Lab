#include<stdio.h>
int main ()
{   int i; 
    int students,marks,sum;
    int highest=0,pass=0,fail=0;
    float average;
    
    printf("Enter number of studnts\n");
    scanf("%d",&students);
   
    for(i=1;i<=students;i++)
    {
     printf("Enter marks of student %d\n",i);
     scanf("%d",&marks);
    sum=sum+marks;
    
    if(marks>=50)
    pass++;
    else fail++;
    if(marks>highest)
        highest=marks;        }
                
    average=(float)sum/students;    
    printf("passes:%d\n",pass);
    printf("fail:%d\n",fail);
    printf("highest:%d\n",highest);
    printf("average:%.2f\n",average);        
    return 0;}