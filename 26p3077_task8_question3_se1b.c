#include <stdio.h>
void circleInfo(float r, float *, float *);
int main ()
{     
     float area,circum,rad;
 do 
   { 
     printf("Enter radius:");
     scanf("%f",&rad);
     if(rad<0)
     printf("radius cannot be negative");
     }
     while(rad<0);

     float *r=&rad;
     float *pArea=&area;
     float *Pcir=&circum;
 circleInfo( rad, &area, &circum); 
     printf("Area= %.2f\nCircumference= %.2f\n",area,circum);
     return 0;
}
void circleInfo(float r, float *pArea, float *pcir)
{
     float pi=3.141519;
    *pArea= pi *r *r;
     *pcir= 2*pi*r;


}




