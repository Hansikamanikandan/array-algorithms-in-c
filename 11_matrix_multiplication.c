
#include <stdio.h>

int main()
{
    int firstMatrix[10][10], secondMatrix[10][10], productMatrix[10][10];
    int rows1, columns1, rows2, columns2;
    int i, j, k;

    printf("Enter rows and columns of First Matrix: ");
    scanf("%d%d", &rows1, &columns1);

    printf("Enter rows and columns of Second Matrix: ");
    scanf("%d%d", &rows2, &columns2);

    if(columns1 != rows2)
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    printf("Enter elements of First Matrix:\n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < columns1; j++)
        {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of Second Matrix:\n");
    for(i = 0; i < rows2; i++)
    {
        for(j = 0; j < columns2; j++)
        {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < columns2; j++)
        {
            productMatrix[i][j] = 0;

            for(k = 0; k < columns1; k++)
            {
                productMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    printf("Product Matrix:\n");

    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < columns2; j++)
        {
            printf("%d ", productMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
