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
void LeaderElement(int *ptr, int size)
{
    int leaders[size];
    int noleaders[size];
    int lElement = 0;
    int noElement = 0;
    for (int i = 0; i < size; i++)
    {
        // int leaders[size];
        // int noleaders[size];
        // int lElement = 0;
        // int noElement = 0;

        int leader = 1;

        for (int j = i + 1; j < size; j++)
        {
            if (ptr[j] > ptr[i])
            // [16 17 4 3 5 2]
            {
                leader = 0; //// 16 अब लीडर नहीं है
                break;      // हम आगे चेक नहीं करेंगे, बाहर निकल जाओ इस inner loop से
            }
        }

        if (leader)
        {
            printf("no leader %d\n", ptr[i]);
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
    LeaderElement(ptr, size);

    free(ptr);
    ptr = NULL;
    return 0;
}