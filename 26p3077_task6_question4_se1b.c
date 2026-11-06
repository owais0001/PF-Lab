#include <stdio.h>
int main()
{
    int i,num,sum,count = 0,first;

    for (num=1;count<4;num++)
    {sum=0;
       for(i=1;i<num;i++)
        { if(num % i == 0)
          {
             sum=sum+i;
          }
        }
         if(sum==num&&num>1)
        {count++;
          printf("%d is a perfect number\n",num);
          first=1;

      for(i=1;i<num;i++)
       {
         if(num%i==0)
         {
           if(first==0)
           {
            printf("+");
          }
        printf("%d",i);
            first=0;
            }
         }
          printf("=%d\n",sum);
       }
    }

    return 0;
}
