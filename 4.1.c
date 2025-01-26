#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("hello.txt", "w");

    if(fptr != NULL) {
        fprintf(fptr, "Hello, \nHow are you? \nMy name is ... \nWhat's your name?");
    }

    fclose(fptr);
}