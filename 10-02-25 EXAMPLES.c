#include <stdio.h>
int main()
{
// Sum of all numbers upto 100
    int a=1,b=0;
    while(a<101)
    {
    b=b+a;
    printf("%d\n",a);
    a=a+1;
    

     }
printf("sum is :%d\n",b);



// Write a C program to read the values of x and y and print the results of the following expressions in one line:
// i. (x+y)/(x - y)
// ii. (x + y)(x - y)
float x,y;
    printf("Enter 2 numbers:");
    scanf("%f %f",&x,&y);
    printf("Answer 1:%f\nAnswer 2:%f",(x+y)/(x - y),(x+y)*(x - y));








/*An electric power distribution company charges its domestic consumers as follows.

Consumption Units

Rate of Charge

001-200            Rs.0.50 per
201-400            Rs. 100 plus Rs.0.65 per unit excess of 200
401-600            Rs.230 plus Rs.0.80 per unit excess of 400
601 and above      Rs.390 plus Rs. 1.00 per unit excess of 600
Write a C Program that reads the customer number and power consumed and prints the amount to be paid by the customer.*/

float units,rate,total;
    printf("Enter the total number of units consumed :");
    scanf("%f",&units);
    printf("Consumed:%0.1f\n",units);

        if(units>=1 & units<=200)
        {
            rate=0.50;
            printf("Total amount :%0.1f \n",units*rate);
        }
        if(units>200 & units<=400)
        {
            rate=0.65;
            printf("Total amount :%0.1f \n",units*rate+100);
        }
        if(units>400 & units<=600)
        {
            rate=0.80;
            printf("Total amount :%0.1f \n",units*rate+230);
        }
        if(units>600)
        {
            rate=1.0;
            printf("Total amount :%0.1f \n",units*rate+390);
        }

}


