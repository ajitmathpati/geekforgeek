#include <stdio.h>
void TakingInput(int Array[], int size)
{

    printf("Enter The Array Element:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &Array[i]);
    }
}
void Display(int Array[], int size)
{
    printf("Array Element Are:");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", Array[i]);
    }
}
void InsertValueAtSpecificPosition(int Array[], int size, int Num, int Position)
{

    for (int i = size - 1; i >= Position - 1; i--)
    {
        Array[i + 1] = Array[i];
    }
    Array[Position - 1] = Num;
    size++;
}
int main()
{

    int Arr[50];
    int size;
    printf("Enter The  What  Element To Add In Array:");
    scanf("%d", &size);
    int Num;
    printf("Enter The Num You Want To Add:");
    scanf("%d", &Num);
    int Position;
    printf("Enteer The Position You Want TO Add:");
    scanf("%d", &Position);
    TakingInput(Arr, size);
    Display(Arr, size);
    InsertValueAtSpecificPosition(Arr, size, Num, Position);
    Display(Arr, size);

    return 0;
}