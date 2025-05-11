// Rotate Array
// Difficulty: MediumAccuracy: 37.06%Submissions: 497K+Points: 4Average Time: 20m
// Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.

// Note: Consider the array as circular.

// Examples :

// Input: arr[] = [1, 2, 3, 4, 5], d = 2
// Output: [3, 4, 5, 1, 2]
// Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2.
// Examples:

// Input: arr[] = [1, 2, 3, 4, 5], k = 4
// Output: 3
// Explanation: 4 appears at index 3.
#include <stdlib.h>
#include <stdio.h>
int *MemoryAllocation(int size)
{
    int *p = NULL;
    p = (int *)malloc(size * sizeof(int));
    if (p == NULL)
    {
        printf("Memory Allocation is Faild !");
        exit(1);
    }
    return p;
}
void Take_Input(int *p, int size)
{
    printf("Enter The Element of array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &p[i]);
    }
}
void rotate_array(int *p, int size)
{
    int num;
    printf("Enter The number to ratate:");
    scanf("%d", &num);
    while (num > 0)
    {
        int temp = p[0];
        for (int i = 1; i < size; i++)
        {
            p[i - 1] = p[i];
        }
        p[size - 1] = temp;
        num--;
    }
}
void display(int *p, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", p[i]);
    }
}

int main()
{
    int size;
    printf("Enter THE SIZE OF array:");
    scanf("%d", &size);
    int *ptr = MemoryAllocation(size);
    Take_Input(ptr, size);
    rotate_array(ptr, size);
    display(ptr, size);
    free(ptr);
    ptr = NULL;

    return 0;
}