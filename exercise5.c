#include <stdio.h>

int main()
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    int size = sizeof(ages) / sizeof(ages[0]);

    int total = 0;

    int lowest = ages[0];

    for(int i = 0; i < size; i++) {
        total += ages[i];
        if(ages[i] < lowest) {
            lowest = ages[i];
        }
    }

    int average = total / size;

    printf("%d\n", average);

    printf("%d", lowest);
    
	return 0;
}