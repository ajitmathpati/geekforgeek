// Longest Subarray with Sum K
// Difficulty: MediumAccuracy: 24.64%Submissions: 644K+Points: 4
// Given an array arr[] containing integers and an integer k, your task is to find the length of the longest subarray where the sum of its elements is equal to the given value k. If there is no subarray with sum equal to k, return 0.

// Examples:

// Input: arr[] = [10, 5, 2, 7, 1, -10], k = 15
// Output: 6
// Explanation: Subarrays with sum = 15 are [5, 2, 7, 1], [10, 5] and [10, 5, 2, 7, 1, -10]. The length of the longest subarray with a sum of 15 is 6.
#include <stdio.h>

#include <stdlib.h>

int *MemoryAllocation(int size)
{
    int *ptr = NULL;
    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
    {
        printf("MEmory Allocation is Failed\n");
        exit(1);
    }
    return ptr;
}
void TakeInput(int *ptr, int size)
{
    printf("Enter The Element Of Array :\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
}
void longestsubarray(int *ptr, int size)
{
    int maxlen = 0;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;

        for (int j = i ; j < size; j++)
        {

            sum += ptr[j];
            if (sum == 15)
            {
                int currentlen = j - i + 1;
                if (currentlen > maxlen)
                {
                    maxlen = currentlen;
                }
            }
        }
    }
    printf("max len: %d\n", maxlen);
}
int main()
{

    int size;
    printf("Enter The Size Of Array:");
    scanf("%d", &size);

    int *p = NULL;
    p = MemoryAllocation(size);
    TakeInput(p, size);
    longestsubarray(p, size);
    free(p);
    p = NULL;

    return 0;
}