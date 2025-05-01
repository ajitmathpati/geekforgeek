// Input: arr[] = [1, 2, 3, 5]
// Output: 4
// Explanation: All the numbers from 1 to 5 are present except 4.
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
void TakrInput(int *ptr, int size)
{
    printf("Enter The Elements Of Array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
}
void MissingElement(int *ptr, int size)
{
    int FirstXor = 0;
    for (int i = 1; i <= size + 1; i++)
    {

        FirstXor ^= i;
    }
    int SecontXor = 0;
    for (int i = 0; i < size; i++)
    {

        SecontXor ^= ptr[i];
    }
    int missingElement = FirstXor ^ SecontXor;
    printf("MIssing Element Is :%d\n", missingElement);
}
int main()
{

    int size;
    printf("ENter THe Size Of Array:");
    scanf("%d", &size);
    int *ptr = NULL;
    ptr = MemoryAllocation(size);
    TakrInput(ptr, size);
    MissingElement(ptr, size);

    free(ptr);
    ptr = NULL;
    return 0;
}