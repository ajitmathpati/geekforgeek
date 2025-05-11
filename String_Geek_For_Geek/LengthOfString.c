// Write a C program to find length of a string.

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char *MemoryAllocation(char size)
{
    char *ptr = NULL;
    ptr = (char *)malloc(size * sizeof(char));
    if (ptr == NULL)
    {
        printf("Error Allocating Memory!");
        exit(1);
    }
    return ptr;
}
void Take_String(char *p, int size)
{
    printf("Enter The String:");
    fgets(p, size, stdin);
    strtok(p, "\n");
    printf("my String Is:%s\n", p);
}
void Length_Of_String(char *p, int size)
{
    int count = 0;
    for (int i = 0; p[i] != '\0'; i++)
    {
        count++;
    }
    printf("The Length of String is:%d", count);
}
int main()
{
    int size;
    printf("Enter The SIze of String:");
    scanf("%d", &size);
    char *p = MemoryAllocation(size);
    fflush(stdin);
    Take_String(p, size);
    fflush(stdin);
    Length_Of_String(p, size);
    free(p);
    p = NULL;
}