
// Given an integer array arr, return all the unique pairs [arr[i], arr[j]] such that i != j and arr[i] + arr[j] == 0.

// Note: The pairs must be returned in sorted order, the solution array should also be sorted, and the answer must not contain any duplicate pairs.

// Examples:

// Input: arr = [-1, 0, 1, 2, -1, -4]
// Output: [[-1, 1]]
// Explanation: arr[0] + arr[2] = (-1)+ 1 = 0.
// arr[2] + arr[4] = 1 + (-1) = 0.
// The distinct pair are [-1,1].
// Input: arr = [6, 1, 8, 0, 4, -9, -1, -10, -6, -5]
// Output: [[-6, 6],[-1, 1]]
// Explanation: The distinct pairs are [-1, 1] and [-6, 6].
// Expected Time Complexity: O(n log n)
// Expected Auxiliary Space: O(n).
#include <stdio.h>
#include <stdlib.h>
int *Memory_Allocation(int size)
{
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("MEMORY ALLOCATION IS FAILED !");
        exit(1);
    }
    return arr;
}

void Take_Input(int *ptr, int size)
{
    printf("Enter The Elements Of the Array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SORTEDARRAY(int *ptr, int size)
{
    printf("the sorted array is :");
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[min] > ptr[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = ptr[i];
            ptr[i] = ptr[min];
            ptr[min] = temp;
        }
        printf("%d", ptr[i]);
    }
}
void Two_sum_Pairs_with_0_Sum(int *ptr, int size)
{
    printf("the pairs of the array which sum to 0 are:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[i] + ptr[j] == 0)
            {
                if (ptr[i] > ptr[j])
                {
                    swap(&ptr[i], &ptr[j]);
                }
                printf("[%d %d]=0\n", ptr[i], ptr[j]);
            }
        }
    }
}

void display(int *ptr, int size)
{
    printf("the elements of the array are :");
    for (int i = 0; i < size; i++)
    {
        printf("%d", ptr[i]);
    }
}
int main()
{
    int size;
    printf("Enter The Size Of the Array:");
    scanf("%d", &size);
    int *ptr = Memory_Allocation(size);
    Take_Input(ptr, size);

    SORTEDARRAY(ptr, size);
    display(ptr, size);
    Two_sum_Pairs_with_0_Sum(ptr, size);

    free(ptr);
    ptr = NULL;

    return 0;
}