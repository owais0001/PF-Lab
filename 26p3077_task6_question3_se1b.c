#include<stdio.h>
int main ()
{   int n,x,i,k,power,fact;
     float sum=0;
     printf("Enter the value for n and value for x:"); 
     scanf("%d %d", &n , &x); 
     for(int k=0;k<=n;k++)
     { power=1;
       fact=1;
       for(i=1;i<=k;i++)
         { power=power*x;
          fact=fact*i;
          }
          sum=sum+(float)power/fact;
     }     
          printf("sum=%.1f\n",sum);



     return 0;
}

