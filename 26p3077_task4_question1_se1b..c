#include<stdio.h>
int main ()
{
    int year;
    printf("Enter any year\n");
    scanf("%d",&year);
    
    if(year%4==0){
    if(year%100!=0) 
     printf("it is a leap yeaer %d\n",year);
    
      else if(year%400==0)
        printf("it is a leap year %d\n",year);
        else printf("it is not a leap year %d\n",year);
        }
        else printf("it is not a leap year %d",year);






    return 0;}
