#include <stdio.h>

int main()
{
    int myNumbers[4] = {25, 50, 75, 100};

    printf("%d\n", *(myNumbers + 1));

    int length = sizeof(myNumbers)/sizeof(myNumbers[0]);

    for(int i = 0; i < length; i++) {
        printf("%d\n", *(myNumbers + i));
    }

	return 0;
}