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
            if (ptr[i] < ptr[j])
            {
                leader = 0; //// 16 अब लीडर नहीं है
                break;      // हम आगे चेक नहीं करेंगे, बाहर निकल जाओ इस inner loop से
                // Leader Element वह element कहलाता है, जो अपने दाहिने (right side) में सभी elements से बड़ा या बराबर होता है।
            }
        }

        if (leader)
        {
            leaders[lElement] = ptr[i];
            lElement++;
        }
        else
        {
            noleaders[noElement] = ptr[i];
            noElement++;
        }
    }
    for (int i = 0; i < lElement; i++)
    {
        printf(" leader Element :  %d  ", leaders[i]);
    }
    printf("\n");
    for (int j = 0; j < noElement; j++)
    {
        printf("no leader Element : %d ", noleaders[j]);
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