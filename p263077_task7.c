#include <stdio.h>
int main ()
{
printf("================ BANK LOAN INTEREST SUMMARY ===============\n");
     float principle=250000.00;
     float rate=8.5;
     int duration=3;
     printf("Principal Amount:\tPKR %.2f \nAnnual Interest Rate:\t%.2f\nLoan Duration:\t\t %d Years (36 months)\n",principle,rate,duration);
      printf("----------------------------------------\n"); 
      float interest;
      float payable;
      float monthly;
      interest=(principle*rate*duration)/100.0;
      payable=principle + interest;
      monthly=payable/(duration*12.0);
      printf("Total Accrued Interest:\tPKR %.2f\nTotal Payable Amount:\tPKR %.2f\nMonthly Installment: \t PKR %.2f\n",interest,payable,monthly);  
     
     
     printf("==========================================================\n");


   return 0;
}