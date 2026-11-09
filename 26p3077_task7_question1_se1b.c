#include<stdio.h>
void welcome(void);
void printSquare(int x, char y);
int main ()
{     int s;
     char ch;
     printf ("Enter Sids and character: ");
     scanf("%d %c", &s,&ch);

     welcome();

     printSquare(s,ch);
     
     return 0;
}
 void welcome(void)
    {  int i;
    for(i=1;i<=20;i++)
     { 
     printf("-");

     }
      printf("\n");
     printf("Pattren Printer V1.0\n");
for(i=1;i<=20;i++)
  {   printf("-");
   }      printf("\n");
     }
void printSquare(int s, char ch)
  {   int i,j;
     for(i=1; i<=s;i++)
      {for( j=1 ; j<=s; j++)
         { printf(" %c",ch);
          }
     printf("\n");
     }
     for(i=1;i<=20;i++)
     { printf("-");
     }printf("\n");
     printf("Pattren Printer V1.0\n");
     for(i=1;i<=20;i++)
     { printf("-");
     }printf("\n");
}