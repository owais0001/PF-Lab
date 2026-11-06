#include<stdio.h>
int main()
{
    int pin;
    int chance=3;
    do{
          printf("Enter your ATM pin\n");
          scanf("%d",&pin);
          if(pin==4321)
          printf("Access granted.\n");
        else 
        chance--; 
        if(pin!=4321)
      printf("WRONG PIN.%d attempts lefts\n",chance);
      
    }
    while(pin!=4321&&chance>0);
    if(pin!=4321)
      printf("Card blocked. Please contact your bank.\n");









    return 0;}