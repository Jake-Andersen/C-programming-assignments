#include <stdio.h>

int main()
{
    int number;

    printf("Please enter a number:\n");

    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("The number %d is even\n", number);
    } else {
        printf("The number %d is odd\n", number);
    }

	return 0;
    
}