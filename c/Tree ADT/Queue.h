#ifndef QUEUE_H
#define QUEUE_H

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Queue
{
    int size;
    int front;
    int rear;
    struct Node **Q;
};

void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (Node **)malloc(q->size * sizeof(Node *));
}

void display(struct Queue q)
{
    int i = q.front + 1;

    do
    {
        printf("%d\n", q.Q[i]);
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);
}

void enqueue(struct Queue *q, struct Node *x)
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

struct Node *dequeue(struct Queue *q)
{
    Node *x = NULL;

    if (q->front == q->rear)
    {
        printf("Queue is empty");
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q)
{
    return q.front == q.rear;
}
#endif /* QUEUE_H */