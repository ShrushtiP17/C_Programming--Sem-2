//TWO DIMENSIONAL ARRAY//
#include <stdio.h>
int main()
{
    int arr[2][3],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d%d element is:",i,j);
            scanf("%d\n",&arr[i][j]);
        }     
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]); 
        }
        printf("\n");
    }
    
    
    return 0;
}