#include <stdio.h>

int main()
{
    int firstNum;
    int secondNum;

    printf("Type a first number: \n");

    scanf("%d", &firstNum);

    printf("Type a second number: \n");

    scanf("%d", &secondNum);

    int* ptr1 = &firstNum;
    int* ptr2 = &secondNum;

    printf("Numbers added together: %d", *ptr1 + *ptr2);
    
	return 0;
}