#include <stdio.h>

struct House {
    int address;
    int squarefeet;
    int NumBedrooms;
    int NumBathrooms;
    int price;
};

int main()
{
    struct House house1 = {1234, 1600, 3, 2, 240000};
    struct House house2 = {4255, 2200, 5, 3, 410000};
    struct House house3 = {1123, 4000, 8, 6, 800000};

    printf("House at: %d measures %d squarefeet with %d bedrooms and %d bathrooms for just $%d!\n", house1.address, house1.squarefeet, house1.NumBedrooms, house1.NumBathrooms, house1.price);
    printf("House at: %d measures %d squarefeet with %d bedrooms and %d bathrooms for just $%d!\n", house2.address, house2.squarefeet, house2.NumBedrooms, house2.NumBathrooms, house2.price);
    printf("House at: %d measures %d squarefeet with %d bedrooms and %d bathrooms for just $%d!\n", house3.address, house3.squarefeet, house3.NumBedrooms, house3.NumBathrooms, house3.price);

    return 0;
}