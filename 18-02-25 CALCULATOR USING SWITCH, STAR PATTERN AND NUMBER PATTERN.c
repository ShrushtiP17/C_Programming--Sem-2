#include <stdio.h>
int main()
{
    //Calculator using cases
    int choose,a,b,c,d, x=0,y,sp,i=1,j;

    printf("Enter 1-ADD,2-SUB,3-MUL,4-DIV:");
    scanf("%d",&choose);
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    switch(choose)
    {
        case 1:
        printf("\nPerforming Addition...\n\n");
        printf("Addition:%d\n\n",(a+b));
        break;


        case 2:
        printf("\nPerforming Substraction...\n\n");
        printf("Substraction:%d\n\n",(a-b));
        break;


        case 3:
        printf("\nPerforming Multiplication...\n\n");
        printf("Multiplication:%d\n\n",(a*b));
        break;


        case 4:
        printf("\nPerforming Division...\n\n");
        printf("Division:%d\n\n",(a/b));
        break;


        default:
        printf("Wrong");
        break;

    }


    
    
    
    /*print 
        *
       **
      *** 
     ****
    *****   */
    while(x<6)
    {
        y=1;
        sp=5-x;
        while(sp>0)
        {
            printf(" ");
            sp--;
        }
        while(y<=x)
        {
            printf("*");
            y++;
        }
        
    printf("\n");
    x++;
    }

/*Print
1
12
123
1234
12345 */ 
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf("%d ",j);
            j++;
        }
    
    printf("\n");
    i++;
    }
 return 0;
}