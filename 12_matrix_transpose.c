#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, columns, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &columns);

    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Transpose of the Matrix:\n");

    for(i = 0; i < columns; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
