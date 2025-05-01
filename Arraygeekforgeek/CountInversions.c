// Given an array of integers arr[]. Find the Inversion Count in the array.
// Two elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.

// Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
// If an array is sorted in the reverse order then the inversion count is the maximum.

// Examples:

// Input: arr[] = [2, 4, 1, 3, 5]
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
#include <stdio.h>
#include <stdlib.h>
int *MemoryAllocation(int size)
{
    int *ptr = NULL;
    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory Allocation  Failed\n");
        exit(1);
    }
    return ptr;
}
void TakeInput(int *ptr, int size)
{
    printf("Enter The Array Elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
}
void Countinversion(int *ptr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[i] > ptr[j])
            {
                printf("(%d,%d)", ptr[i], ptr[j]);
                count++;
            }
        }
    }
    printf("Total Invension Count is :%d", count);
}
int main()
{
    int size;
    printf("ENter The Size Of Array\n");
    scanf("%d", &size);
    int *p = NULL;
    p = MemoryAllocation(size);
    TakeInput(p, size);
    Countinversion(p, size);
    free(p);
    p = NULL;

    return 0;
}