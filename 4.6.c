#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numStudents;
    int *scores;
    FILE *file;

    printf("Please enter the number of students: ");

    scanf("%d", &numStudents);

    scores = calloc(numStudents, sizeof(*scores));

    if (scores == NULL) {
        printf("Memory allocation failed!\n");
    }

    printf("Enter the scores of %d students (out of 100):\n", numStudents);

    for (int i = 0; i < numStudents; i++) {
        printf("Please enter the score for student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    file = fopen("scores.txt", "w");

    if (file == NULL) {
        printf("Failed to open file!\n");
    }

    for (int i = numStudents - 1; i >= 0; i--) {
        fprintf(file, "%d\n", scores[i]);
    }

    free(scores);

    scores = NULL;

    fclose(file);

    return 0;
}