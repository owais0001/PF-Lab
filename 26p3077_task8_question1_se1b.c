#include<stdio.h>
void change(int *,float *,char *);
int main ()
{     int age;
     float cgpa;
     char grade;
     printf("Enter Age:");
     scanf("%d",&age);
     printf("Enter gpa:");
     scanf("%f",&cgpa);
     printf("Enter grade:");
     scanf(" %c", &grade);
     int *pAge;
          pAge=&age;
     float *pCgpa; 
           pCgpa=&cgpa;
     char *pGrade;
           pGrade=&grade;
     
     printf("age  =%d\tvia pointer  =%d\t&age  =%p\tpAge  =%p\n",age,*pAge,&age,pAge);
     printf("cgpa  =%.2f\tvia pointer  =%.2f\t&cgpa  =%p\tpCgpa  =%p\n",cgpa,*pCgpa,&cgpa,pCgpa);
     printf("Grade =%c\tvia pointer =%c\t&grade =%p\tpGrade =%p\n",grade,*pGrade,&grade,pGrade);
     printf("&pAge=%p\t&pCgpa=%p\t&pGrade=%p\n",&pAge,&pCgpa,&pGrade);
     change(&age,&cgpa,&grade );
     printf("After chaning through pointers:\n");
     printf("Age = %d,\tcgpa = %.2f\tgrade = %c\n",age,cgpa,grade);
     return 0;
}
void change(int *pAge,float *pCgpa, char *pGrade)
{   
     *pAge+=1;
     *pCgpa+=0.25;
     *pGrade+=1;

     //age changed because *pAge stores the address of age variable so we use *pAge in function and modify the age variable directly from its memory addresss
     //so indirectly *pAge means age variable 
}

