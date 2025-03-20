#include <stdio.h>
int main()
{
    //FIND NUMBER OF STUDENTS WHO HAVE PASSED OR FAILED
    int marks[10]={20,70,45,90,25,56,99,30,24,98};
    int i,j=0,k=0,stu,mark=25,x=1,y=1;
    for(i=0;i<10;i++)
    {
        
        if(marks[i]>=mark)
        {
            printf("pass\n");
            j=x+j;
             
        }
        else if(marks[i]<mark)
        {
            printf("fail\n");
            k=y+k;
            
        }
            
    }
    printf("%d students have passed\n",j);
    printf("%d students have failed\n",k);

    //LET USER DECIDE THE ARRAY SIZE AND INPUTS
    int i,j,k,n,m=1;
    printf("enter size:");
    scanf("%d",&i);
    int marks[i];
    printf("your array is of size:%d\n",i);

    for(j=0;j<i;j++)
    {
        printf("enter marks:");
        scanf("%d",&marks[j]);
       
    }
    //REVERSE THE ARRAY
    for(k=i-1;k>=0;k--)
    {
        printf("marks:%d\n",marks[k]);
    }

    //PRODUCT OF ARRAY ELEMENTS
    for(n=0;n<i;n++)
    {
        m=m*marks[n];
    }
    printf("%d",m);
    return 0;

}