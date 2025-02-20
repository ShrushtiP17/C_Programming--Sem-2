#include <stdio.h>
#include <math.h>
int main()
{
//Roots of a quadratic equation
float a,b,c,det,img,real;
float root1,root2,sq,sqr;
printf("Enter First Number:");
scanf("%f",&a);
printf("Enter Second Number:");  
scanf("%f",&b);
printf("Enter Third Number:");
scanf("%f",&c);

det=b*b-4*a*c;
sq=sqrt(det);
sqr=sqrt(-det);
    if(det>0)
    {
        root1=(-b+sq)/(2.0*a);
        root2=(-b-sq)/(2.0*a);
        printf("Roots of this Quadratic Equation are: %f\n and \n%f",root1,root2);
    }
    else if (det<0)
    {
        real=(-b)/(2.0*a);
        img= sqr/(2.0*a);
printf("Roots of this Quadratic Equation are: %f + i%f\n and \n%f - i%f ",real,img,real,img);
    }
    else
    {
        root1=root2=(-b)/(2.0*a);
        printf("Roots of this Quadratic Equation are: %f\n and \n%f (we have repeated roots)",root1,root2);
    }




    //Factorial of a number
    int a,b,c=1;
    printf("Enter a number: ");
scanf("%d",&a);

    while(a>0)
        {
        c=c*a;
        a--;
        }
    printf("\nfactorial: %d\n",c)
return 0;
}
