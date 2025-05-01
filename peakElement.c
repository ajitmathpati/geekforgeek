// Input: arr = [1, 2, 4, 5, 7, 8, 3]
// Output: true
// // Explanation: arr[5] = 8 is a peak element because arr[4] < arr[5] > arr[6].
// ] = [10, 20, 15, 2, 23, 90, 80]
#include <stdio.h>
#include <stdlib.h>
int *MemoryAllocation(int size)
{
    int *ptr = NULL;
    ptr = (int *)malloc(size * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory Allocation Failed\n");
        exit(1);
    }
    return ptr;
}
void TakeInput(int *ptr, int size)
{
    printf("Enter The Elements Of Array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
}

void PeakElement(int *ptr, int size)
{

    for (int i = 1; i < size - 1; i++)
    {
        if (ptr[i] > ptr[i - 1] && ptr[i] > ptr[i + 1])
        {
            printf("peak Element Is:%d\n", i);
            printf(" true\n");
        }
    }
}

int main()
{
    int size;
    printf("Enter The Size Of Array:");
    scanf("%d", &size);

    int *ptr = NULL;
    ptr = MemoryAllocation(size);
    TakeInput(ptr, size);
    PeakElement(ptr, size);
    free(ptr);
    ptr = NULL;

    return 0;
}