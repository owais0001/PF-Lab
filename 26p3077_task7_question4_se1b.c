#include <stdio.h>
float tofahrenhiet(float c);
float toCelsius(float f);
void printTable(int start,int end,int step);
int main ()
{     int start,end,step;
     float f;
     printf("start: ");
     scanf("%d",&start);
     printf("End: ");
     scanf("%d",&end);
     printf("Step: ");
     scanf("%d",&step);
      printTable(start,end,step); 
     printf("Enter temperature in Fahrenhiet: ");
     scanf("%f",&f);
     printf("%.1fF--%.2fC\n",f,toCelsius(f));
     
    
     
     return 0;
}
float tofahrenhiet(float c)
{
     return c*9.0/5.0+32;
}
float toCelsius(float f)
{
     return(f-32)*5.0/9.0;
}
void printTable(int start,int end,int step)
{
      int a;
     printf("celsius    Fahrenheit\n");
     for(a=start;a<=end;a=a+step)
     {
          printf("  %d\t\t%.1f\n",a,tofahrenhiet(a));
     }


}
