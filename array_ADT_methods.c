#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++) // traverse array to display each item
    {
        printf("%d ", arr.A[i]);
    }
}

void Append(struct Array *arr, int n) // pass reference to array to modify actual parameters
{
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = n;
        arr->length++;
    }
    else
    {
        printf("\nArray is already full.\n");
    }
}

void Insert(struct Array *arr, int n, int index)
{
    if (arr->length >= arr->size)
    {
        printf("\nArray is full. Cannot insert element.\n");
        return;
    }

    if (index < 0 || index > arr->length)
    {
        printf("\nInvalid index. Cannot insert.\n");
    }

    for (int i = arr->length - 1; i >= index; i--)
    {
        arr->A[i + 1] = arr->A[i];
    }

    arr->A[index] = n;
    arr->length = arr->length + 1; // Increase the length
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    Display(arr);
    Append(&arr, 7);
    Display(arr);
    Insert(&arr, 3, 0);
    Display(arr);

    return 0;
}
