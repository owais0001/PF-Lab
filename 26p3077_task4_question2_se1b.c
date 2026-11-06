#include<stdio.h>
int main ()
{ int lap,cs,ms,tot_savings=0;
 int months=0;
  printf("Enter laptop price\n");
   scanf("%d",&lap);
   printf("Enter current savings\n");
   scanf("%d",&cs);
    printf("Enter monthly savings\n");
    scanf("%d",&ms);
 
    tot_savings = tot_savings + cs;
    
   while(tot_savings<=lap){
    tot_savings += ms;
    months++;
    printf("Month %d: savings = %d", months, tot_savings);
    printf("\n");
    }
  printf("Sara can buy a laptop after %d months\n",months);

    return 0;
}