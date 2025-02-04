#include<stdio.h>
int main()
{
    int a,b=21,c=32;
//Age eligibility for UPSC Examamination
printf("Enter Candidate's age:");
scanf("%d",&a);


if(a>=b)
{
    if(a>c)
    {
        printf("Unfortunately you are too old for the exam :(\n");
    }
    if(a<b)
    {
        printf("Unfortunately you are too young for the exam :(\n");
    } 
    else
    {
        printf("Congratulations!You are Eligible :)\n");
    }
}
else
{
    printf("Unfortunately you are too young for the exam :(\n");
} 

return 0;
}