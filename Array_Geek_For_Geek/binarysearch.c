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
void Binary_search(int *p, int size)
{
    int searchElement;
    printf("Enter THE SEARCH Element:");
    scanf("%d", &searchElement);
    int left = 0;
    int right = size - 1;
    int count = 0;
    while (left <= right)
    {
        count++;
        int mid = (left + right) / 2; // overflow
        // mid = left + (right - left) / 2 not overflow
        if (p[mid] == searchElement)
        {
            printf("Element is found  %d at index:%d", searchElement, mid);
            break;
        }
        else if (p[mid] < searchElement)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    printf("total count is :%d", count);
}

int main()
{
    int size;
    printf("Enter THE SIZE OF array:");
    scanf("%d", &size);
    int *ptr = MemoryAllocation(size);
    Take_Input(ptr, size);
    Binary_search(ptr, size);
    free(ptr);
    ptr = NULL;

    return 0;
}