#include<stdio.h>
int main ()
{ int tot_run=0;
    int boundry=0;
    int dot_ball=0;
    int runs=0;
    int i;

    for(i=1;i<=6;i++)
    {printf("Enter score on balls :\n");
    scanf("%d",&runs);
    tot_run=tot_run+runs;
    if(runs==4||runs==6)
    boundry++;
    if(runs==0)
    dot_ball++;    
    }
    printf("Total runs:%d\ntotal boundries:%d\nTotal dots ball:%d\n",tot_run,boundry,dot_ball);



    return 0;
}