#include <stdio.h>

int main()
{
    float temperature;

    printf("Please enter a temperature:\n");

    scanf("%f", &temperature);

    printf("%d", temperature > 70.0 && temperature < 85.0);

	return 0;
    
}