#include <stdio.h>
int main ()
{
    
      printf("================ CIRCLE GEOMETRY REPORT ================\n");
      float radius=7.5;
      printf("Given Radius:\t\t%.3f  cm\n",radius);

    float diameter;
    float circumfarence;
    float area;
    const float pi = 3.1416;
    diameter=2*radius;
    circumfarence=2*pi*radius;
    area=pi*radius*radius;
    printf("Calculted Diameter:\t %.3f  cm\n",diameter);
    printf("Calculted Circumference:\t%.3f cm\n",circumfarence);
    printf("Calculted Area:\t\t%.3f  sq.cm\n",area);
    printf("========================================================\n");


      return 0;

}