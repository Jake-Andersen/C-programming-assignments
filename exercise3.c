#include <stdio.h>

int main()
{
    int num = 10;

    while(num != 0) {
        printf("%d\n", num);
        num--;
    }

    printf("Happy New Year!\n");

    num = 10;

    while(num >= 0) {
        if(num % 2 == 0) {
            printf("%d\n", num);
        }
        num--;
    }

	return 0;
    
}