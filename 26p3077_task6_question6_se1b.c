#include<stdio.h>
int main ()
{    int i, num,s,j;
    printf("Enter number of rows:");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {    for(s=1;s<=num-i;s++)
           { printf(" ");
            }
            for(j=0;j<=i;j++)
            {    printf("%d ",i);
            }
            printf("\n");
    }
    for(i=num-1;i>=0;i--)
     {
          for(s=1;s<=num-i;s++)
             { printf(" ");
              }
          
         for(j=0;j<=i;j++)
          {     printf("%d ",i);
          }   
          printf("\n");
     }

    return 0;
}