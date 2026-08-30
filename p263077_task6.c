#include <stdio.h>
int main ()
{
     printf("================ KINEMATICS MOTION REPORT ===============\n");
     float velocity=12.50;
     float acceleration=3.20;
     float time=6.00;
     printf("Initial Velocity (Vi):\t%.2f m/s\nAcceleration (a):\t%.2f m/s^2\nTime Elapsed (t):\t %.2f s\n",velocity,acceleration,time);
      printf("----------------------------------------\n"); 
      float final;
      float distance;
      final=velocity + (acceleration*duration);
      distance=(velocity*duration) + (0.5*acceleration*duration*duration);
      printf("Calculated Final Velocity (vf):\t%.2f m/s\nCalculated Distance (s):\t%.2f m\n",final,distance);  
     
     
     printf("========================================================\n");

      return 0;
}