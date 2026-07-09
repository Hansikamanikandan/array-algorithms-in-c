#include <stdio.h>

int main()
{
    int firstMatrix[10][10], secondMatrix[10][10], sumMatrix[10][10];
    int rows, columns, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &columns);

    printf("Enter elements of First Matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter elements of Second Matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            sumMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }

    printf("Sum Matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
