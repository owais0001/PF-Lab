#include <stdio.h>
void showMenu(void);
int readNonNegative(void);
void printLine(int length);
long power(int base, int exp);
long factorial(int n);
int gcd(int a, int b);
int lcm(int a, int b);
int main(void)
{   int choice,a,b;

 do
 {
   showMenu();
   scanf("%d", &choice);
     if(choice==1)
      { a=readNonNegative();
         b=readNonNegative();
       printLine(20);
       printf("%d^%d=%ld\n",a,b,power(a,b));
       printLine(20);
        }
        else if(choice==2)
        {a=readNonNegative();
          printLine(20);
          printf("%d!=%ld\n",a,factorial(a));
          printLine(20);
        }
        else if (choice == 3)
        { a=readNonNegative();
          b=readNonNegative();
          printLine(20);
          printf("GCD = %d\n",gcd(a,b));
          printf("LCM = %d\n",lcm(a,b));
            printLine(20);
        }
        else if(choice==4)
        {printf("Goodbye!\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }
   while(choice!=4);
    return 0;
}
void showMenu(void)
{
    printf("\n----- MINI MATH TOOLKIT -----\n");
    printf("1.Power\n");
    printf("2.Factorial\n");
    printf("3.GCD and LCM\n");
    printf("4.Exit\n");
    printf("Choice: ");
}
int readNonNegative(void)
{  int num;
     printf("Enter a non-negative number: ");
     scanf("%d", &num);

   while(num<0) 
    {
      printf("Number cannot be negative.\n");
      printf("Enter a non-negative number: ");
     scanf("%d", &num);
  }
    return num;
}
void printLine(int length)
{    int i;
    for(i=0;i<length;i++)
    {   printf("-");
    }
    printf("\n");
}
long power(int base, int exp)
{   long result = 1;
    int i;
  for(i=1;i<=exp;i++)
    {
     result=result*base;
    }
    return result;
}
long factorial(int n)
{ long result = 1;
   int i;
   for(i=1;i<=n;i++)
    {
        resul =result*i;
    }

    return result;
}
int gcd(int a,int b)
{   int rem;

   while(b!=0)
    {
     rem=a%b;
      a=b;
      b=rem;
    }
 return a;
}
int lcm(int a, int b)
{     if(a==0||b==0)
    {
        return 0;
    }

    return a*b/gcd(a, b);
}