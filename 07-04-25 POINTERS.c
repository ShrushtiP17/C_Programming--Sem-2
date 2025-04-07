#include <stdio.h>
void main()
{
/*PRINTING INDEX NUMBER ,VALUE AT THE INDEX, ADDRESS , ASCII VALUE OF THE INPUT STRING*/


    char name[17];
    char *ptr;
    int i;
    ptr=name;
    fgets(name,sizeof(name),stdin);

    for(i=0;i<sizeof(name);i++)
    {
        printf("Index No. : %d\nLetter: %c\nAddress: %p\nAscii Value: %X\n\n",i,*(ptr+i),(ptr+i),*(ptr+i));
    }




/*FINDING LENGHT OF THE STRING USING POINTER */


    char str[]="Shrushti Phatate";
    char *ptr;
    int i=0;
    ptr=str;
    while(*ptr != '\0')
    {
        i++;
        ptr++;
    }
    printf("Lenght: %d\n",i);
}