#include <stdio.h>
#include <math.h>

void fahrenheitToCelsius() {
    float fTemp;
    printf("Enter a temperature in Fahrenheit: \n");
    scanf("%f", &fTemp);

    float cTemp = (fTemp - 32) * (5.0/9.0);

    printf("The temperature in Celsius is: %f\n", cTemp);
}

void calcAreaFromHeightAndWidth() {
    int height;
    int width;
    printf("Please enter a width:\n");
    scanf("%d", &width);
    printf("Please enter a height:\n");
    scanf("%d", &height);

    int area = width * height;

    printf("Area is: %d\n", area);
}

void calcAreaFromRadius() {
    float radius;
    printf("Please enter a radius:\n");
    scanf("%f", &radius);

    float pi = 3.15;
    float area = pi * pow(radius, 2);

    printf("Area is: %f\n", area);
}

int main()
{
    fahrenheitToCelsius();
    calcAreaFromHeightAndWidth();
    calcAreaFromRadius();

	return 0;
}