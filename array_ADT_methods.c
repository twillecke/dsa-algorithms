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

void Delete(struct Array *arr, int index)
{
    if (index < 0 || index >= arr->length)
    {
        printf("\nInvalid index. Cannot Delete.\n");
    }

    for (int i = index; i < arr->length; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }

    arr->length = arr->length - 1; // Increase the length
}

void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == key)
        {
            Swap(&arr->A[i], &arr->A[i - 1]); // improving algorithm with Transposition
                                              //    Swap(&arr->A[i], &arr->A[i-1]); Or improving algorithm with Move to Head/Front
            return i - 1;
        };
    };
    return -1;
}

int BinarySearch(struct Array arr, int key)
{
    int l, mid, h;
    l = 0;
    h = arr.length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }

    return -1;
}

int RBinarySearch(int a[], int l, int h, int key) // recursive version
{
    int mid;

    if (l <= h)
    {
        mid = (l + h / 2);
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            return RBinarySearch(a, l, mid - 1, key);
        else
            return RBinarySearch(a, mid + 1, h, key);
    }
    return -1;
}

int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    };
    return -1;
}

int Set(struct Array *arr, int index, int n)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = n;
    };
    return -1;
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int Sum(struct Array arr)
{
    int sum = 0;
    int i;
    for (i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return sum;
}

float Avg(struct Array arr)
{
    return (float)Sum(arr) / arr.length;
}

int main(int argc, char const *argv[])
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    Set(&arr, 2, 13);
    printf("%f", Avg(arr));

    return 0;
}
