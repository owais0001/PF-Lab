#include<stdio.h>
void showBalance(float *balance);
void deposit(float *balance, float amount);
int withdraw(float *balance, float amount);
int main()
{
   int choice;
   float balance=5000,amount;
   float *Pbalance=&balance;
do
{    
     printf("----- BANK ACCOUNT -----\n");
     printf("1. Bank\n2. deposit\n3. withdraw\n4. Exit\n");
     printf("Choice: ");
      scanf("%d",&choice);
     
     if(choice==1)
     {
          showBalance(&balance);
     }
     if(choice==2)
     { printf("Amount: ");
       scanf("%f",&amount);
       deposit(&balance, amount); 
     }
     if(choice==3)
     { printf("Amount: "); 
       scanf("%f",&amount);
        if(withdraw(&balance, amount)==1)
          {
            printf("withdrawn\n");
          }
          else printf("insufficient balance\n");
     }
     if(choice==4)
     {
       printf("Goodbye!");
     }
     if(choice>4||choice==0||choice<0)
     {
          printf("Invalid choice\n");
     }
}
     while(choice!=4);
    
     return 0;
}
void showBalance(float *pbalance)
{
     printf("balance: Rs %.2f\n",*pbalance);
}
void deposit(float *pbalance, float amount)
{

     if(amount>=0)
     {
          *pbalance+=amount;
     }
     else printf("Reject\n");
}
int withdraw(float *pbalance, float amount)
{
   if(*pbalance>=amount)  
     {
       *pbalance-=amount;
     return 1;
     } 
     else 
          return 0;    
}