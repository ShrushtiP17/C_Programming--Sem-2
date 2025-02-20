#include <stdio.h>
#include<math.h>
int main()
{
//Distance formula program


    float sqr,x1,x2,y1,y2,dis,x,y,a,b,r,p,a, x_1=2.0,x_2=5.0,y_1=2.0,y_2=6.0,ar,di,dia,p1,p2,rad;
    int i=4,j=5,power;

    printf("Enter x1:");
    scanf("%f",&x1);
    printf("Enter x2:");
    scanf("%f",&x2);
    printf("Enter y1:");
    scanf("%f",&y1);
    printf("Enter y2:");
    scanf("%f",&y2);

    
    a=pow((x2-x1),2);
    b=pow((y2-y1),2);
    sqr=sqrt((a+b));
    dis=sqr;
    printf("The distance between these ponits(x1,x2) and (y1,y2) is: %0.2f",dis);







//{Radius

   r=sqrt((i*i+j*j));
   printf("Radius of the circle is:%0.2fcm\n",r);
   
   //Perimeter

   p=(2*3.14*r);
   printf("Perimeter of the circle is: %0.2fcm\n",p);
   
   //Area

   power=pow(r,2);
   a=(3.14*power);
   printf("Area of the circle is: %0.2fcm",a);//}







//Diameter
   
   p1=pow((x_2-x_1),2.0);
   p2=pow((y_2-y_1),2.0);
   
   dia=sqrt((p1+p2));
   printf("Diameter of the circle is:%0.2fcm\n",dia);
   
   //Area
   
   rad=(dia/2);
   ar=(3.14*pow(rad,2));
   printf("Area of the circle is:%0.2fcm\n",ar);
   
    return 0;

}