#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 100000

int main()
{
    int arr[ARRAY_SIZE] = {0};
    srand(time(NULL));

    // Random access pattern
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        int index = rand() % ARRAY_SIZE;
        arr[index]++;
    }

    // Sequential access pattern
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        arr[i]++;
    }

    return 0;
}
