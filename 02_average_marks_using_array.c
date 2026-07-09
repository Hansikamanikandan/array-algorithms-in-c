

#include <stdio.h>

int main()
{
    int marks[100], numberOfSubjects, i, total = 0;
    float average;

    printf("Enter the number of subjects: ");
    scanf("%d", &numberOfSubjects);

    printf("Enter the marks:\n");

    for(i = 0; i < numberOfSubjects; i++)
    {
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    average = (float)total / numberOfSubjects;

    printf("Average Marks = %.2f", average);

    return 0;
}
