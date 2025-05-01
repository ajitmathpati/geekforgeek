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
void DuplicateElement(int *ptr1, int size)
{
    int *visted = (int *)calloc(size, sizeof(int));

    int found = 0;

    for (int i = 0; i < size; i++)
    {
        if (visted[i] == 1)
        {
            continue;
        }
        for (int j = i + 1; j < size; j++)
        {
            if (ptr1[i] == ptr1[j])
            {
                printf("duplicate Element Is:%d\n", ptr1[i]);
                visted[i] = 1;
                visted[j] = 1;
                found = 1;
            }
        }
    }
    if (!found)
    {
        printf("[]\n");
    }
    free(visted);
    visted = NULL;
}

int main()
{

    int size;
    printf("Enter The Size Of Array:");
    scanf("%d", &size);
    int *ptr1 = NULL;
    ptr1 = Memoryallocation(size);
    TakeInput(ptr1, size);
    DuplicateElement(ptr1, size);
    free(ptr1);
    ptr1 = NULL;
    return 0;
}