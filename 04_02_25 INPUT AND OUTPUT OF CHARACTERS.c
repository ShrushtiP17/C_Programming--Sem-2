#include <stdio.h>
int main()
{ 
char ch;
char str[100];
printf("enter : ");
scanf("%c\n",&ch);
printf("entered:%c\n",ch);


printf("enter : ");
ch=getchar();
printf("entered:%c\n",ch);


printf("enter name :");
scanf("%s",&str);
printf("name: %s\n",str);


printf("enter : ");
ch=getchar();
printf("entered: ");
putchar(ch);


printf("%6d\n",123);
printf("%6d\n",12345);
printf("%6.2f\n",1.23);
printf("%.4s\n","MIT*VPU");

return 0;
}
