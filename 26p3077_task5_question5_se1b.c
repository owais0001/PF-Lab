#include<stdio.h>
int main ()
{
    int items=0,bill=0;
    int price,quantity,choice;
    int discount,payable;
    do
    {
        printf("\n\t\t___________________________\n");
        printf("\n\t\tChoice\tItems\tprice(Rs)\n");
        printf("\t\t___________________________\n");
        printf("\t\t1.\tTea\t\t60\n");
        printf("\t\t2.\tsamosa\t\t40\n");
        printf("\t\t3.\tSandwich\t180\n");
        printf("\t\t4.\tCheckout\t-\n");   
        printf("\t\t___________________________\n");
           printf("Enter choice:\n");
           scanf("%d",&choice);
           
         if(choice>=1&&choice<=3)
         { printf("Enter quantity:\n");
         scanf("%d",&quantity);
         if(choice==1)
         price=60;
         else if(choice==2)
         price=40;
         else price=180;
         bill=bill+price*quantity;
         items=items+quantity;
         printf("currnet bill:%d\n",bill);
         }
          else if(choice!=4)
          printf("invalid choice try again\n");
          
         
         
         }  while(choice!=4);
         if(bill>1000)
         discount=bill*10/100;
         else discount=0;
         payable=bill-discount;
         
    printf("\nTotal items: %d",items);
    printf("\nBill: Rs %d",bill);
    printf("\nDiscount: Rs %d",discount);
    printf("\nPayable: Rs %d\n",payable);
    






    return 0;
}