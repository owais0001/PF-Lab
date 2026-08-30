#include <stdio.h>
int main ()
{
printf("================ FAST CAFETERIA RECEIPT ================\n");
           printf("Item\tOty\tUnit price (PKR)\tSubtotal (PKR)\n"); 
           printf("--------------------------------------------------------\n"); 
           int tea=3,samosa=4,roll=2;
           float t_up=60.00,s_up=40.50,r_up=120.00;
           float sub_tea;
           float sub_samosa;
           float sub_roll;
           sub_tea=tea*t_up;
           sub_samosa=samosa*s_up;
           sub_roll=roll*r_up;
         printf("Tea\t%d\t\t%.2f\t\t%.2f\nSamosa\t%d\t\t%.2f\t\t%.2f\nChicken Roll\t%d\t%.2f\t\t%.2f\n",tea,t_up,sub_tea,samosa,s_up,sub_samosa,roll,r_up,sub_roll);
            printf("--------------------------------------------------------\n"); 
          float bill_subtotal;
          bill_subtotal=sub_tea+sub_samosa+sub_roll;
          float gst;
          float g_total;
          gst=0.16*bill_subtotal;
          g_total=bill_subtotal+gst;
          printf("Subtotal:\t\t\t\tPKR %.2f\nGST (16%%):\t\t\t\tPKR %.2f\n",bill_subtotal,gst);
          printf("--------------------------------------------------------\n");
          printf("Grand Total:\t\t\t\tPKR %.2f\n",g_total);
  printf("================ THANK YOU FOR YOUR VISIT ==============\n");


   return 0;
}