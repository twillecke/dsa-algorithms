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
    q->front = q->rear = 0; // in circular queur front and rear should be at 0
    q->Q = (int *)malloc(q->size * sizeof(int));
}

void DisplayQueue(struct Queue q)
{
    int i = q.front + 1;

    do
    {
        printf("%d\n", q.Q[i]);
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);
}

void Enqueue(struct Queue *q, int x)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        printf("Queue overflow\n");
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
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
        q->front = (q->front + 1) % q->size; // move front address to next index
        x = q->Q[q->front];
    }
    return x; // returns deleted element
}

int main(int argc, char const *argv[])
{
    struct Queue q;
    CreateQueue(&q, 5);

    Enqueue(&q, 10);
    Enqueue(&q, 20);
    Enqueue(&q, 30);
    Enqueue(&q, 40);
    Enqueue(&q, 50);
    Enqueue(&q, 60);

    Dequeue(&q);

    DisplayQueue(q);

    return 0;
}
