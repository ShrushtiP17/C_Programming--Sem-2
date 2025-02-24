#include<stdio.h>
int main()
{
    int total,item,item2,vgng,sand=20,pizza=70,bir=110,frd=60,quan,choice,quan2,quan3,item3,item4,quan4,choice2;
    int water,quan5,p1=0,p2=0,p3=0,p4=0,p5=20,p6=0,p7=0,p8=0,p9=0,vgng1,vgng2;
    printf("// OUR MENU//\n");
    printf("1.Veg\n2.Non-Veg\nEnter your prefferd choice:");
    scanf("%d",&vgng);

    switch(vgng)
    {
        case 1:
        printf("1.SANDWICH-20Rs\n2.PIZZA-70RS\nEnter your preffered dish:");
        scanf("%d",&item);
        printf("Enter your quantity:");
        scanf("%d",&quan);
        printf("You wish for something else?\nEnter 1 for YES and 2 for NO:");
        scanf("%d",&choice);
        
        
            if(item==1)
            {
                p1=20;
            }
            else if(item==2)
            {
                p2=70;
            }
            else 
            {
                p1=0;
                p2=0;
            }
        break;

        case 2:
        printf("1.FRIED CHICKEN-60Rs\n2.BIRYANI-110Rs\nEnter your preffered dish:");
        scanf("%d",&item3);
        printf("Enter your quantity:");
        scanf("%d",&quan3);
        printf("You wish for something else?\nEnter 1 for YES and 2 for NO:");
        scanf("%d",&choice2);
        
        if(item3==1)
            {
                p3=60;
            }
            else if(item3==2)
            {
                p4=110;
            }
            else 
            {
                p3=0;
                p4=0;
            }
        break;

        

    }



    switch (choice)
    {
            case 1:
            printf("1.Veg\n2.Non-Veg\nEnter your prefferd choice:");
            scanf("%d",&vgng1);

            if (vgng1==1){
            printf("1.SANDWICH-20Rs\n2.PIZZA-70RS\nEnter your preffered dish:");
            scanf("%d",&item2);
            printf("Enter your quantity:");
            scanf("%d",&quan2);
            
            if(item2==1)
            {
                p6=20;
            }
            else if(item2==2)
            {
                p7=70;
            }
            else 
            {
                p6=0;
                p7=0;
            }
            }
            else if (vgng1==2){
            printf("1.FRIED CHICKEN-60Rs\n2.BIRYANI-110Rs\nEnter your preffered dish:");
            scanf("%d",&item2);
            printf("Enter your quantity:");
            scanf("%d",&quan2);
            
            if(item2==1)
            {
                p6=60;
            }
            else if(item2==2)
            {
                p7=110;
            }
            else 
            {
                p6=0;
                p7=0;
            }
            }
            break;

            case 2:
            printf("OK\n");
            break;

    }
    switch (choice2)
    {
            case 1:
            printf("1.Veg\n2.Non-Veg\nEnter your prefferd choice:");
            scanf("%d",&vgng2);

            if (vgng2==1){
            printf("1.SANDWICH-20Rs\n2.PIZZA-70RS\nEnter your preffered dish:");
            scanf("%d",&item4);
            printf("Enter your quantity:");
            scanf("%d",&quan4);
            
            if(item4==1)
            {
                p8=20;
            }
            else if(item4==2)
            {
                p9=70;
            }
            else 
            {
                p8=0;
                p9=0;
            }
            }
            else if (vgng2==2){
            printf("1.FRIED CHICKEN-60Rs\n2.BIRYANI-110Rs\nEnter your preffered dish:");
            scanf("%d",&item2);
            printf("Enter your quantity:");
            scanf("%d",&quan2);
            
            if(item2==1)
            {
                p8=60;
            }
            else if(item2==2)
            {
                p9=110;
            }
            else 
            {
                p8=0;
                p9=0;
            }
            }
            break;

            case 2:
            printf("OK\n");
            break;

    }






    printf("You want to add MINERAL WATER-20Rs to the choices:\nEnter 1 for YES and 2 for NO:");
    scanf("%d",&water);

    switch (water)
    {
            case 1:
            printf("Enter your quantity:");
            scanf("%d",&quan5);
            break;

            case 2:
            printf("OK\n");
            break;

    }




    total=(p1*quan)+(p2*quan)+(p3*quan3)+(p4*quan3)+(p5*quan5)+(p6*quan2)+(p7*quan2)+(p8*quan4)+(p9*quan4);
    printf("Your Total bill is:  %dRs\n",total);
    printf("THANK YOU :)\n");

}