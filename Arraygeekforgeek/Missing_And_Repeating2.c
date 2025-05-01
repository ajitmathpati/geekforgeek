// Missing And Repeating
// Difficulty: EasyAccuracy: 24.83%Submissions: 587K+Points: 2Average Time: 30m
// Given an unsorted array arr of positive integers. One number a from the set [1, 2,....,n] is missing and one number b occurs twice in the array. Find numbers a and b.

// Note: The test cases are generated such that there always exists one missing and one repeating number within the range [1,n].
#include <stdio.h>
#include <stdlib.h>
int *MemoryAllocation(int size)
{
    int *ptr = NULL;
    ptr = (int *)malloc(size * sizeof(int));
    if (ptr == NULL)
    {
        printf("memory Allocation is Failed !");
        exit(1);
    }
    return ptr;
}
void Take_input(int *p, int size)
{
    printf("ENter The Size Of Array Element:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &p[i]);
    }
}
void Missing_And_Repeating(int *p, int size)
{
    int *count = (int *)calloc(size + 1, sizeof(int));
    for (int i = 0; i < size; i++)
    {
        count[p[i]]++;
    }

    for (int i = 1; i <= size; i++)
    {
        if (count[i] == 0)
        {
            printf("missing Element is:%d ", i);
        }
        else if (count[i] == 2)
        {
            printf("duplicate Element is :%d", i);
        }
    }
    free(count);
    count = NULL;
}

int main()
{
    int size;
    printf("Enter The Size of Array :");
    scanf("%d", &size);
    int *p = NULL;
    p = MemoryAllocation(size);
    Take_input(p, size);
    Missing_And_Repeating(p, size);

    free(p);
    p = NULL;

    return 0;
}
// इससे count[] array ऐसा बनता है:

// Index:    0  1  2  3  4  5
// Values:   0  0  0  0  0  0
// अब जब आप count[arr[i]]++ करते हो, तो:
// Iteration-wise:
// arr[0] = 1 ⇒ count[1]++ ⇒ count[1] = 1

// arr[1] = 3 ⇒ count[3]++ ⇒ count[3] = 1

// arr[2] = 3 ⇒ count[3]++ ⇒ count[3] = 2 (Duplicate!)

// arr[3] = 4 ⇒ count[4]++ ⇒ count[4] = 1

// arr[4] = 5 ⇒ count[5]++ ⇒ count[5] = 1

// अब पूरा count[] होगा:
// Index:    0  1  2  3  4  5
// Values:   0  1  0  2  1  1
// मतलब:
// count[2] == 0 ⇒ Missing

// count[3] == 2 ⇒ Repeating