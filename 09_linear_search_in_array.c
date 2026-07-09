#include <stdio.h>

int main()
{
    int numbers[100], numberOfElements;
    int i, searchElement, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &numberOfElements);

    printf("Enter the elements:\n");

    for(i = 0; i < numberOfElements; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    for(i = 0; i < numberOfElements; i++)
    {
        if(numbers[i] == searchElement)
        {
            printf("Element found at index %d.", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found.");
    }

    return 0;
}
