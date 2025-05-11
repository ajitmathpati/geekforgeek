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
    if (size <= 0)
    {
        printf("minimum jump is:0\n");
        return;
    }
    if (ptr[0] == 0)
    {
        printf("End Is not Reacheble\n");
        return;
    }

    int maxreach = ptr[0];
    int jump = 1;
    int steps = ptr[0];

    for (int i = 1; i < size; i++)
    {

        if (i == size - 1)
        {
            printf("minimum Jump id %d\n", jump);
            return;
        }

        if (i + ptr[i] > maxreach)
        {
            maxreach = i + ptr[i];
        }
        steps--;
        if (steps == 0)
        {
            jump++;

            if (i >= maxreach)
            {
                printf("END IS NOT REACHEBLE\n");
                return;
            }
            steps = maxreach - i;
        }
    }
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