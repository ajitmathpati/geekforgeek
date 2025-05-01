#include <stdio.h>
#include <stdlib.h>
int *MemoryAllocation(int size)
{
    int *ptr = NULL;
    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation is Failed !");
        exit(1);
    }
    return ptr;
}
void TakeInput(int *ptr2, int size)
{
    printf("Enter The Element Of Array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ptr2[i]);
    }
}
void longSubarray(int *ptr2, int size, int k)
{
    int maxlen = 0;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += ptr2[j];

            if (sum == k)
            {
                int countlen = j - i + 1;
                if (countlen > maxlen)
                {
                    maxlen = countlen;
                }
            }
        }
    }
    printf("The length of the longest subarray with a sum of %d  and length is :%d\n", k, maxlen);
}
int main()
{

    int size;
    printf("Enter The Size of Array:");
    scanf("%d", &size);
    int *ptr2 = MemoryAllocation(size);
    TakeInput(ptr2, size);
    int k;
    printf("Enter The Value Off k:");
    scanf("%d", &k);
    longSubarray(ptr2, size, k);
    free(ptr2);
    ptr2 = NULL;

    return 0;
}