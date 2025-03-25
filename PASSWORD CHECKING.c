#include<stdio.h>

int main()
{
    char pass[100],check[100],i,j,k=1;
    
    printf("Enter a new password:");
    scanf("%s",pass);
    printf("Re-enter to confirm your password:");
    scanf("%s",check);
    
    for(i=0;pass[i] != '\0' || check[i] != '\0';i++)
    {
        if(pass[i]!=check[i])
        {
            k=0;
            break;
        }
    }
    if(k==0)
    {
        printf("wrong");
    }
    else if (k==1)
    {
        printf("right");
    }
}
