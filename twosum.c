// nput: arr[] = [2, 3, 1, 2, 3]
// Output: [2, 3]
// Explanation: 2 and 3 occur more than once in the given array.
#include <stdio.h>

#include <stdlib.h>
int *Memoryallocation(int size)
{
    int *ptr = NULL;
    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation is failed \n");
        exit(1);
    }
    return ptr;
}
void TakeInput(int *ptr1, int size)
{
    printf("Enter The Array Elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr1[i]);
    }
}
void twosum(int *ptr1, int size)
{
    int tar;
    printf("ENter The Target Element:");
    scanf("%d", &tar);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ptr1[i] + ptr1[j] == tar)
            {
                printf("[%d] + [%d]=%d\n", ptr1[i], ptr1[j], ptr1[i] + ptr1[j]);
                
                break;
            }
        }
    }
}

int main()
{

    int size;
    printf("Enter The Size Of Array:");
    scanf("%d", &size);
    int *ptr1 = NULL;
    ptr1 = Memoryallocation(size);
    TakeInput(ptr1, size);
    twosum(ptr1, size);

    return 0;
}