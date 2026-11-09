#include<stdio.h>
int readUnits(void);
float calculateBill(int units);
int main ()
{     int units;
     float total_bill;
     units=readUnits();
     total_bill=calculateBill(units);

     printf("Units consumed :%d\n",units);
     printf("Total bill Rs :%.2f\n",total_bill);


     return 0;
}
int readUnits(void)
{ int  units;
do
  { printf("Enter units consumed: ");
  scanf("%d",&units);
    if(units< 0)
    {
       printf("Units cannot be negative\n");
     }
  }
  while(units<0);
     return units;
}
float calculateBill(int units)
{     float bill=0;
     if(units<=100)
     bill=units*10;
     else if(units<300)
     bill=100*10+(units-100)*15;
     else
     bill=100*10+200*15+((units-300)*20);

     if(bill>3000)
     bill=bill+(bill*5/100);

     return bill;

}
