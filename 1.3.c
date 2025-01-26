#include <stdio.h>

int main()
{
    int numItems = 50;
    float itemCost = 9.99;
    float cost = numItems * itemCost;

    printf("Number of items: %d, cost of each item: %f, total cost of all items: %f", numItems, itemCost, cost);

    return 0;
}