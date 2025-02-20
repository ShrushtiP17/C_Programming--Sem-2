#include <stdio.h>

int main()
{
    
    int a=1,b=0,x=1,y,i;
    int n;
    printf("enter a number:");
    scanf("%d",&n);

    printf("number:%d\n",n);


  
    //List of numbers till n   
    printf("list:\n");


  
  //List of ODD and EVEN numbers
    while(a<=n)
        {
            printf("%d",a);
        
         
                if(a%2==0)
                {
                    printf("(Even)\n");
                    
                }
                else
                {
                    printf("(Odd)\n"); 
                    
                }


          
   //Sum of numbers till n       
            b=b+a;
            a++;
        }
    printf("Sum of the numbers: %d\n",b);  


  
    //List of prime numbers till n
    printf("Prime numbers are:");
    while(x<=n)
        {
            i=0;
            y=1;
            while(y<=x)
            {
                if(x%y==0)
                {
                    i++;
                }
                y++;
            }
            
        
            if(i==2)
                {
                    printf("%d",x);
                }
            x++;
        }   
        
    return 0;
}
