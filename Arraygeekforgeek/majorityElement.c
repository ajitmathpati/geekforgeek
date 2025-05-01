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
    printf("ENter The Array Elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }
}
void mejorityElement(int *ptr, int size)
{

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[i] == ptr[j])
            {
                count++;
            }
        }

        if (count > size / 2)
        {
            printf("Majority Element Is %d\n", ptr[i]);
            return;
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
    mejorityElement(ptr, size);

    free(ptr);
    ptr = NULL;
    return 0;
}