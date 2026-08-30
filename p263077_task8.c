#include <stdio.h>
int main ()
{
printf("================ MONTHLY SALARY SLIP ===============\n");
     float salary=85000.00;
     float rent;
     float medical;
     rent=(0.20*salary);
     medical=(0.10*salary);
     printf("Basic Salary:\tPKR %.2f\nHouse Rent Allowance (20%%):\tPKR %.2f\nMedicl Allowance (10%%):\t\t %.2f \n",salary,rent,medical);
      printf("-----------------------------------------------------\n"); 
      float gross;
      float tax;
      float monthly;
      float net;
      gross=salary + rent + medical;
      tax=(0.05*gross);
      net=gross-tax;
      printf("Gross Salary:\tPKR %.2f\nTax Deduction:\tPKR %.2f\n",gross,tax);  
     
     printf("-----------------------------------------------------\n");
     
     printf("Net Payable Salary:\tPKR%.2f\n",net);
     printf("=====================================================\n");


   return 0;
}