#include <stdio.h>

int main()
{
    int myNumbers[4] = {25, 50, 75, 100};

    printf("%d\n", *(myNumbers + 1));

	return 0;
}