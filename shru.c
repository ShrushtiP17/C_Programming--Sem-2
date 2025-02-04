#include<stdio.h>
main()
{ 
    int a,b,c;
    float distance,time,speed;
    float a,b,c,y,x,z;
    m=5;
    y=++m;
    printf("value = %d\n",y);
    m=5;
    y=m++;
    printf("value1 = %d\n",y);

    a=9;
    b=12;
    c=3;
    x=a-b/3+c*2-1;
    y=a-b/(3+c)*(2-1);
    z=a-(b/(3+c)*2)-1;
    printf("x= %0.1f\n",x);
    printf("y= %0.1f\n",y);
    printf("z= %0.1f\n",z);

distance=67;
time=15;
speed=distance/time;
printf("speed = %0.3f km/hr\n",speed);

a=5;
b=8;
c=18;
printf("equation of line is %dx + %dy = %d\n",a,b,c);
}

