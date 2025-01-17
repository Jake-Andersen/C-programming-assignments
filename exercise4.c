#include <stdio.h>

int main()
{
    for(int i = 10; i <= 100; i += 10) {
        printf("%d\n", i);
    }

    for(int i = 1; i <= 9; i++) {
        for(int j = 1; j <= 9; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

	return 0;
}