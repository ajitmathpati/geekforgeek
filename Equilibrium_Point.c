// Given an array of integers arr[], the task is to find the first equilibrium point in the array.

// The equilibrium point in an array is an index (0-based indexing) such that the sum of all elements before that index is the same as the sum of elements after it. Return -1 if no such point exists.

// Examples:

// Input: arr[] = [1, 2, 0, 3]
// Output: 2
// Explanation: The sum of left of index 2 is 1 + 2 = 3 and sum on right of index 2 is 3.
// Input: arr[] = [1, 1, 1, 1]
// Output: -1
// Explanation: There is no equilibrium index in the array.

#include <stdio.h>

#include <stdlib.h>

int *MemoryAllocation(int size)
{

    int *ptr = NULL;
    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation is failed !");
        exit(1);
    }
    return ptr;
}
void Take_Input(int *p, int size)
{
    printf("Enter The Element Of Array:");
    for (int i = 0; i < size; i++)
    {

        scanf("%d", &p[i]);
    }
}
int Equilibrium_point(int *p, int size)
{
    int Rightsum = 0;
    int Leftsum = 0;
    for (int i = 0; i < size; i++)
    {
        Leftsum += p[i];
    }
    for (int j = 0; j < size; j++)
    {
        Leftsum -= p[j];
        if (Rightsum == Leftsum)
        {
            return j+1;
        }
        Rightsum += p[j];
    }
    return -1;
}
int main()
{
    int size;
    printf("Enter The Size Of Array:");
    scanf("%d", &size);
    int *p = MemoryAllocation(size);
    Take_Input(p, size);
    int result = Equilibrium_point(p, size);
    if (result != -1)
    {
        printf("Equilibrium index is: %d\n", result);
    }
    else
    {
        printf("No equilibrium index found\n");
    }
    free(p);
    p = NULL;

    return 0;
}