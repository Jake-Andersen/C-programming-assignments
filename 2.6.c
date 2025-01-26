#include <stdio.h>

int main()
{
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    int size = sizeof(ages) / sizeof(ages[0]);

    int lowest = ages[0];

    for(int i = 0; i < size; i++) {
        if(ages[i] < lowest) {
            lowest = ages[i];
        }
    }

    printf("%d", lowest);
    
	return 0;
}