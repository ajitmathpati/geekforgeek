#include <stdio.h>

int main()
{
    int Array[50];
    int size;
    printf("Enter The  What  Element To Add In Array:");
    scanf("%d", &size);
    printf("Enter The Array Element:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &Array[i]);
    }
    printf("Array Element Are:");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", Array[i]);
    }
    int Num;
    printf("Enter The Num You Want To Add:");
    scanf("%d", &Num);
    int Position;
    printf("Enteer The Position You Want TO Add:");
    scanf("%d", &Position);

    for (int i = size - 1; i >= Position - 1; i--)
    {
        Array[i + 1] = Array[i];
    }
    Array[Position - 1] = Num;
    size++;
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", Array[i]);
    }

    return 0;
}