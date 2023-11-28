#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;  // size of array/queue
    int front; // front index address should start at -1
    int rear;  // rear index address should start at -1
    int *Q;    // address pointer to array
};

void CreateQueue(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size * sizeof(int));
}

void DisplayQueue(struct Queue q)
{
    int i;
    for (i = q.front + 1; i <= q.rear; i++)
    {
        printf("%d\n", q.Q[i]);
    }
}

void Enqueue(struct Queue *q, int x)
{
    if (q->rear == q->size - 1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int Dequeue(struct Queue *q)
{
    int x = -1;

    if (q->front == q->rear)
    {
        printf("Queue is empty");
    }
    else
    {
        q->front++; // move front address to next index
        x = q->Q[q->front];
    }
    return x; // returns deleted element
}

int main(int argc, char const *argv[])
{
    struct Queue q;
    CreateQueue(&q, 3);

    printf("Queue size: %d | Front address: %d | Rear Address: %d\n", q.size, q.front, q.rear);

    Enqueue(&q, 5);
    Enqueue(&q, 3);
    Enqueue(&q, 7);

    printf("Queue size: %d | Front address: %d | Rear Address: %d\n", q.size, q.front, q.rear);
    DisplayQueue(q);
    Dequeue(&q);
    DisplayQueue(q);

    return 0;
}
