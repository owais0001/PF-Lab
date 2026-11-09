#include<stdio.h>
#include<math.h>

int main ()
{ int a,b;
     double c=0,area;
     printf("Enter side a: ");
     scanf("%d",&a);
  printf("Enter side b: ");
     scanf("%d",&b);

     c=sqrt(pow(a,2)+pow(b,2));
     printf("Hypotenuse:%.2lf\n",c);
     printf("Round up:%.1f\n",ceil(c));
     printf("Round up:%.1f\n",floor(c));
     area=(float)1/2*a*b;
      printf("Area:%.2f\n",area);

     return 0;
}