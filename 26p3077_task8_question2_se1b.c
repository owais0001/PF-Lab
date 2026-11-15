#include<stdio.h>
void swap(int *,int *);
void sortThree( int *,int *, int *);
int main ()
{ int num1,num2,num3;
     printf("Enter three numer:");
     scanf("%d %d %d",&num1, &num2, &num3);
     int *a=&num1;
     int *b=&num2;
     int *c=&num3;
     printf("Before: %d %d %d\n",num1,num2,num3);
     sortThree(&num1,&num2,&num3);
     printf("After: %d %d %d\n",num1,num2,num3);

     return 0;
}
void sortThree(int *a,int *b,int *c)
{
   if(*a>*b)
     {
       swap(a, b);
     }                   //Here in swap we passes a,b,c not &a,&b,&c because we know that we send the address of num1,num2,num3 in sortThree 
     if(*b>*c)          // so sortThree function has the addersses of num1.num2.num3 which are sove in a,b,c not in *a,*b,*c because it threy hold varibale
     {                    // if we do &a,&b,&c that means we are passing address of pointers
          swap( b,c);
     }
     if(*a>*c)
     {
          swap( a,c);
     }

}
void swap(int *x,int *y)
{
     int temp=*x;
     *x=*y;
     *y=temp;

}