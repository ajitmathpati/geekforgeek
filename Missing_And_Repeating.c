// Missing And Repeating
// Difficulty: EasyAccuracy: 24.83%Submissions: 587K+Points: 2Average Time: 30m
// Given an unsorted array arr of positive integers. One number a from the set [1, 2,....,n] is missing and one number b occurs twice in the array. Find numbers a and b.

// Note: The test cases are generated such that there always exists one missing and one repeating number within the range [1,n].
#include <stdio.h>
#include <stdlib.h>
int *MemoryAllocation(int size)
{
    int *ptr = NULL;
    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
    {
        printf("memory Allocation is Failed !");
        exit(1);
    }
    return ptr;
}
void Take_input(int *p, int size)
{
    printf("ENter The Size Of Array Element:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &p[i]);
    }
}
int Missing(int *p, int size)
{
    int result;
    int index = 0;
    int miselement = 0;
    for (int i = 1; i < size; i++)
    {
        index ^= i;
    }
    for (int i = 0; i < size; i++)
    {
        miselement ^= p[i];
    }
    result = miselement ^ index;
    return result;
}
int Repeating(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (p[i] == p[j])
            {
                return i;
            }
        }
    }
}
int main()
{
    int size;
    printf("Enter The Size of Array :");
    scanf("%d", &size);
    int *p = NULL;
    p = MemoryAllocation(size);
    Take_input(p, size);
    int miss = Missing(p, size);
    printf("Missing Element IS :%d\n", miss);
    Repeating(p, size);
    free(p);
    p = NULL;

    return 0;
}