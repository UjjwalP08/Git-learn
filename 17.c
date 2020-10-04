#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a[3][2][4];
    printf("Enter values:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
         for (int k = 0; k < 4; k++)
         {

            scanf("%d",&a[i][j][k]);

         }
         
        }
        
    }

    // Display part

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            for (int k = 0; k < 4; k++)
            {
                
            printf(" %d \t",a[i][j][k] );

            }
        
        printf("\n");

            }
            
            
        printf("\n");
    }
    

    


    return 0;
}