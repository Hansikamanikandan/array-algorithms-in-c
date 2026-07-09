#include <stdio.h>

int main()
{
    int marks[100], numberOfSubjects, i, total = 0;

    printf("Enter the number of subjects: ");
    scanf("%d", &numberOfSubjects);

    printf("Enter the marks:\n");

    for(i = 0; i < numberOfSubjects; i++)
    {
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    printf("Total Marks = %d", total);

    return 0;
}
