#include <stdio.h>
//FIBONACCI NUMBER USING RECURSIVE FUNCTION
int fibo(int n)
{
    if (n==1)
    return 1;

    else if (n==0)
    return 0;

    else
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int a,b,n;
    printf("enter a number:");
    scanf("%d",&n);

    printf("FIBONACCI NUMBER:%d",fibo(n));
}

//SUM OF DIGITS OF A NUMBER
int main()
{
    int a=0,n,b,c=0;
    printf("enter a number:");
    scanf("%d",&n);

    for(;n>0;n=n/10)
    { 
        a+=n%10;
    }
    printf("SUM:%d",a);
}

//SUM OF n DIGITS
int main()
{
    int count,num,sum=0;
    printf("enter a number:");
    scanf("%d",&num);

    for(count=0;count<=num;count++)
    {
        sum=sum+count;
    }
    printf("SUM:%d",sum);
}
