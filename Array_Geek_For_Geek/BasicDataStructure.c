#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, *ptr;
    ptr = NULL;
    int sum = 0;

    printf("Enter The Size Of Array:");
    scanf("%d", &size);
    ptr = (int *)malloc(size * sizeof(int));
    printf("Enter The Array Element:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d And Index :%d\n", *(ptr + i), i);
    }

    free(ptr);
    ptr = NULL;

    return 0;
}