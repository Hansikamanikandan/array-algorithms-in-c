#include <stdio.h>

int main()
{
    int numbers[100], numberOfElements, i, maximum;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    printf("Enter the elements:\n");

    for(i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &numbers[i]);
    }

    maximum = numbers[0];

    for(i = 1; i < numberOfElements; i++)
    {
        if(numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }

    printf("Maximum Element = %d", maximum);

    return 0;
}
