/* POINTER:"*"means -> it looks at the value at the address at which it is pointing*/
#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;  //temp is storing the value at the address which the pointer x is pointing at//
    *x=*y;  //pointer x is storing the value of pointer y
    *y=temp;  //pointer y is storing the value of temp
    return;
}
int main()
{
    int a,b,temp;
    printf("Enter 1st no.: ");
    scanf("%d",&a);
    printf("Enter 2nd no.: ");
    scanf("%d",&b);
    swap(&a,&b);  //when calling the function we can use different arguements
    printf("1st no. is: %d\n",a);
    printf("2nd no. is: %d\n",b);
    return 0;
}

/*CALL WITH VALUE*/
int fact(int a)
{
    int x,y=1;
    for(x=1;x<=a;x++)
    {
        y=y*x;
    }
    return y;
}
int main()
{
    int n,c,r;
    printf("enter 1st: ");
    scanf("%d",&n);
    printf("Enter 2nd no.: ");
    scanf("%d",&r);
    c=n-r;
    printf("n! :%d\n",fact(n));
    printf("(n-r)! :%d\n",fact(c));
    printf("r! :%d\n",fact(r));
    printf("NCR:%d\n",(fact(n)/(fact(c)*fact(r))));
}

/*CALL WITH REFERENCE*/
int fact(int *a)
{
    int x,y=1;
    for(x=1;x<=*a;x++)
    {
        y=y*x;
    }
    return y;
}
int main()
{
    int n,c,r;
    printf("enter 1st: ");
    scanf("%d",&n);
    printf("Enter 2nd no.: ");
    scanf("%d",&r);
    c=n-r;
    printf("n! :%d\n",fact(&n));
    printf("(n-r)! :%d\n",fact(&c));
    printf("r! :%d\n",fact(&r));
    printf("NCR:%d\n",(fact(&n)/(fact(&c)*fact(&r))));
}
