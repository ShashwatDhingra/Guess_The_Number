#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0));
    number = rand() %100 + 1; // Generate random number between 1 and 100.
    printf("Random Number = %d", number);
    //Keep running while correct number is gussed.
    return 0;
}