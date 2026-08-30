#include <stdio.h>
int main ()
{
printf("================ SEMESTER ACADEMIC REPORT ============\n");
           printf("Course\tCredit Hours\tObtained\n"); 
           printf("-----------------------------------------------------\n"); 
  
          float pf_marks=88.0;
          int pf_credits=3;
          float cal_marks=76.5;
          int cal_credits=3;
          float phy_marks=82.0;
          int phy_credits=2;
          printf("Programing Fund\t%d\t%.2f\n",pf_credits,pf_marks);
           printf("Calculus\t%d\t%.2f\n",cal_credits,cal_marks);
           printf("Applied Physics\t%d\t%.2f\n",phy_credits,phy_marks);
            printf("-----------------------------------------------------\n"); 
          float total_weight;
          total_weight=(88.0*3)+(76.5*3)+(82.0*2);
          int total_credits=3+3+2;
          float average;
          average=total_weight/total_credits;
          printf("Total Credits: %d\tWeight Average: %.2f%%\n",total_credits,average);
  
  printf("======================================================\n");


   return 0;
}