#include <stdio.h>

int main()
{
    double myDouble = 2.55;
    int myInt = 5;
    char myChar = 'A';
    double* ptrd = &myDouble;
    int* ptri = &myInt;
    char* ptrc = &myChar;

    printf("Address of: %p, Value of: %f, Memory size: %lu\n", &myDouble, myDouble, sizeof(myDouble));
    printf("Address of: %p, Value of: %d, Memory size: %lu\n", &myInt, myInt, sizeof(myInt));
    printf("Address of: %p, Value of: %c, Memory size: %lu\n", &myChar, myChar, sizeof(myChar));
    printf("Address of: %p, Value of: %p, Memory size: %lu\n", &ptrd, ptrd, sizeof(ptrd));
    printf("Address of: %p, Value of: %p, Memory size: %lu\n", &ptri, ptri, sizeof(ptri));
    printf("Address of: %p, Value of: %p, Memory size: %lu\n", &ptrc, ptrc, sizeof(ptrc));
    
	return 0;
}