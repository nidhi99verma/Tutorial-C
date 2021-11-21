#include <stdio.h>
int main() 
{
    int A[3][3][3], B[3][3][3], C[3][3][3], i , j, k;

    printf("Enter 9 numbers of 1st matrix : ");
    for (i = 0; i <= 2; i++)                              
        for (j = 0; j <= 2; j++) 
            for (k = 0; k <= 2; k++) 
                scanf("%d", &A[i][j][k]);
        
    printf("Enter 9 numbers of 2nd matrix : ");
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            for (k = 0; k <= 2; k++) 
                scanf("%d", &B[i][j][k]);   

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)  
        {   
            for (k = 0; k <= 2; k++) 
            {
                C[i][j][k] = A[i][j][k] + B[i][j][k]; 
                printf("%d ", C[i][j][k]); 
            }    
        }
        printf("\n");          
    }
}