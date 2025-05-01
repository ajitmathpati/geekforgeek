#include <stdio.h>
#include <stdlib.h>
int *MemoryAllocation(int size)
{
    int *ptr = NULL;
    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
    {
        printf("memoery Allocation Failed\n");
        exit(1);
    }
    return ptr;
}
void TakeInput(int *ptr, int size)
{
    printf("ENter The Array Elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
}
void Minimumjump(int *ptr, int size)
{
    int jump = 0;
    int maxreach = 0;
    int step = 0;
    for (int i = 0; i < size - 1; i++)
    {
        maxreach = (maxreach, i + ptr[i]);
        if (i == jump)
        {
            jump = maxreach;
            step++;
        }
    }
    printf("minimum jump is:%d\n", step);
}
int main()
{
    int size;
    printf("Enter The Size Of Array:");
    scanf("%d", &size);
    int *ptr = MemoryAllocation(size);
    TakeInput(ptr, size);
    Minimumjump(ptr, size);

    free(ptr);
    ptr = NULL;
    return 0;
}