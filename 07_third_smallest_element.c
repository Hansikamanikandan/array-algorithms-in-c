#include <stdio.h>

int main()
{
    int numbers[100], numberOfElements;
    int i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    printf("Enter the elements:\n");

    for(i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < numberOfElements - 1; i++)
    {
        for(j = i + 1; j < numberOfElements; j++)
        {
            if(numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    if(numberOfElements >= 3)
        printf("Third Smallest Element = %d", numbers[2]);
    else
        printf("Array must contain at least 3 elements.");

    return 0;
}
