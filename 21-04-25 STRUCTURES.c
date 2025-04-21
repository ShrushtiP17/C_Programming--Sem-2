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

}

