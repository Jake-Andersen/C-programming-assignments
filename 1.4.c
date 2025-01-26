#include <stdio.h>

int main()
{
    int maxScore = 500;

    int userScore = 423;

    float percentage = (userScore / maxScore) * 100;

    printf("User's percentage of score: %f", percentage);

    return 0;
}