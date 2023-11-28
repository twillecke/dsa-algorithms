#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void createLinkedList(int arr[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void DisplayLinkedList(struct Node *p)
{
    while (p != NULL) // loop while pointer points at some address
    {
        printf("%d ", p->data);
        p = p->next; // assign to point 'p' address of next Node
    }
}

int LengthLinkedList(struct Node *p)
{
    int length = 0;
    while (p != NULL)
    {
        length++;
        p = p->next;
    }
    return length;
}

int SumLinkedList(struct Node *p)
{
    int sum = 0;
    while (p != NULL)
    {
        sum = p->data + sum;
        p = p->next;
    }
    return sum;
}

int MaxLinkedList(struct Node *p)
{
    int max = 0;
    int current;

    while (p != NULL)
    {
        current = p->data;
        if (current > max)
        {
            max = current;
        }
        p = p->next;
    }
    return max;
}

struct Node *SearchLinkedList(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (p->data == key)
            return (p);
        p = p->next;
    }
    return NULL;
}

struct Node *ImprovedSearchLinkedList(struct Node *p, int key)
{
    struct Node *q = NULL;

    while (p != NULL)
    {
        if (p->data == key)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return NULL;
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;

    if (index < 0 || index > LengthLinkedList(p))
        return;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

int main(int argc, char const *argv[])
{
    int A[] = {3, 5, 7};
    createLinkedList(A, 3);
    Insert(first, 8, 10);

    DisplayLinkedList(first);

    return 0;
}
