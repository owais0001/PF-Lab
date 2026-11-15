#include<stdio.h>
void convertTime(int total_s, int *h, int *m, int *s);
void addSeconds(int *h, int *m, int *s, int extra);
int main ()
{
     int total_s,extra,hr,min,sec;
     printf("Enter total seconds: ");
     scanf("%d",&total_s);
     printf("Enter seconds to add: ");
     scanf("%d",&extra);
     int *pTotal_s=&total_s;
     int *pSec=&sec;
     int *pEx=&extra;
     int *pHr=&hr;
     int *pMin=&min;
          
  convertTime( total_s,&hr,&min,&sec);
     printf("Time: %02d:%02d:%02d\n",hr,min,sec);
     addSeconds(&hr, &min, &sec, extra);
     printf("New time: %02d:%02d:%02d\n",hr,min,sec);
     return 0;
}
void convertTime(int total_s, int *pHr, int *pMin, int *pSec)
{
     *pHr=total_s/3600;
     *pMin=(total_s%3600)/60;
     *pSec=total_s%60;

}
void addSeconds (int *pHr, int *pMin, int *pSec, int extra)
{
     int totalsec= ((*pHr*3600)+(*pMin*60)+*pSec)+extra;

     *pHr=totalsec/3600;
     *pMin=(totalsec%3600)/60;
     *pSec=totalsec%60;



}



