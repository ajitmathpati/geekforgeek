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
void DeleteValueAtSpecificPosition(int Array[], int *size, int Position)
{

    for (int i = Position - 1; i < *size - 1; i++)
    {
        Array[i] = Array[i + 1];
    }

    (*size)--;
}
int main()
{

    int Arr[50];
    int size;
    printf("Enter The  What  Element To Add In Array:");
    scanf("%d", &size);
    TakingInput(Arr, size);

    Display(Arr, size);
    int Position;
    printf("Enter The Position You Want TO Delete:");
    scanf("%d", &Position);
    DeleteValueAtSpecificPosition(Arr, &size, Position);
    Display(Arr, size);

    return 0;
}