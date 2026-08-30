#include <stdio.h>

int main ()
{
    printf("-----------------------------------------------------\n");
    
    
    char alpha='M';
    int beta = 42;
    float gamma = 3.141590;
    double delta = 98.765432;
    
    
       printf("char\t\t'%c'\t\t\t  %zu Byte(s) \n", alpha, sizeof(alpha));
    
     printf("int\t\t %d \t\t\t  %zu Byte(s) \n", beta, sizeof(beta));
    
    printf("float\t\t %f\t \t%zu Byte(s) \n", gamma, sizeof(gamma));
    
      printf("double\t\t %lf\t \t%zu Byte(s) \n",delta, sizeof(delta));
         printf("-----------------------------------------------------\n");
    return 0;

}