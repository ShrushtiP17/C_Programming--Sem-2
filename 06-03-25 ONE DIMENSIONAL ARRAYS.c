//ONE-DIMENSIONAL ARRAY//
#include <stdio.h>
int main()
{
    int marks[5],i,max=0,stu;
    float avg=0,avg1=0;
//RUN TIME ARRAY FOR STORING MARKS OF EACH STUDENT
    for(i=0;i<5;i++)
    {
        printf("enter marks of student%d:",i+1);
        scanf("%d",&marks[i]);
    }


//MARKS OF EACH STUDENT//
    for(i=0;i<5;i++)
    {
        printf("marks of student %d is %d\n",i+1,marks[i]);
    }


//TOPPER OF THE CLASS//    
    for(i=0;i<10;i++)
    {
        if (marks[i]>max)
        {
            max=marks[i];
            stu=i+1;
        }
    }
    printf("Student%d is the topper of the class with %dmarks",stu,max);


//AVERAGE MARKS OF ALL STUDENTS//
    for(i=0;i<10;i++)
    {
        avg+=marks[i];
        avg1=avg/(i+1);
    }
    printf("%0.4f",avg1);


//PRINTING REVERSE ARRAY//
for (i=5;i>0;i--)
{
    printf("marks of student%d is %d\n",i,marks[i-1]);
}    
    return 0;
}