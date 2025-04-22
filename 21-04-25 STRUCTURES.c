/*STRUCTURES(User defined data type)*/

/*FORMAT
struct (data type name of choice){

};  */

#include <stdio.h>
int main(){
   
    struct student{
        int rollno;
        float percentage;
        char grade;
        char uniname[50];
    }arnav , punit;

    scanf("%d",&arnav.rollno);
    scanf("%f",&arnav.percentage);
    getchar();
    scanf("%c",&arnav.grade);
    getchar();
    fgets(arnav.uniname,sizeof(arnav.uniname),stdin);
    scanf("%d",&punit.rollno);
    scanf("%f",&punit.percentage);
    getchar();
    scanf("%c",&punit.grade);
    getchar();
    fgets(punit.uniname,sizeof(punit.uniname),stdin); 

    printf("\n%d\n",arnav.rollno);
    printf("%f\n",arnav.percentage);
    printf("%c\n",arnav.grade);
    printf("%s",arnav.uniname);
    printf("%d\n",punit.rollno);
    printf("%f\n",punit.percentage);
    printf("%c\n",punit.grade);
    printf("%s",punit.uniname);




   struct dob{
        int dd;
        char mm[10];
        int yy;
    }shru;

    scanf("%d",&shru.dd);
    scanf("%s",shru.mm);
    scanf("%d",&shru.yy);

    printf("%d-",shru.dd);
    printf("%s-",shru.mm);
    printf("%d",shru.yy);


   

    struct player{
        char name[30];
        int runs;
        int wickets;
    }player;

    printf("Enter name of the player:");
    fgets(player.name,30,stdin);
    printf("Enter runs scored:");
    scanf("%d",&player.runs);
    printf("Enter wickets taken:");
    scanf("%d",&player.wickets);
    
    printf("%s",player.name);
    printf("%d\n",player.runs);
    printf("%d",player.wickets);


}

