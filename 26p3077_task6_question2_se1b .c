#include <stdio.h>
int main ()
{    int i,j,symbol;
    printf("Enter any symbol:");
    scanf("%lc",&symbol);
    for(i=1;i<=5;i++)
     {for(j=1;j<=i;j++)
      {
       printf("%lc",symbol);
        }
        printf("\n");
     } 
          for(i=1;i<=4;i++)
     {for(j=4;j>=i;j--)
      {
       printf("%lc",symbol);
        }
        printf("\n");
     }
       
       
    return 0;
}