

#include <stdio.h>

int main()
{
    int numbers[100], numberOfElements, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    printf("Enter the elements:\n");

    for(i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &numbers[i]);

        if(numbers[i] % 2 != 0)
        {
            sum = sum + numbers[i];
        }
    }

    printf("Sum of Odd Numbers = %d", sum);

    return 0;
}
