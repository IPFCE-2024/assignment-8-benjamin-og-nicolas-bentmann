#include "queue.h"
#include <stdlib.h>


// Opgave 3
void initialize(queue *q) {
    q->front = NULL;
    q->rear = NULL;
    q->size = 0;
}

bool empty(const queue *q) {
    return (q->size == 0);
}

bool full(const queue *q) {
    return false;
}

void enqueue(queue *q, int x) {
    node* p = malloc(sizeof(node));
    p->data = x;
    p->next = NULL;
    if (empty(q))
    {
        q->front = p;
    }
    else
    {
        q->rear->next = p;
    }
    q->rear = p;
    q->size++;
    return;
}

int dequeue(queue *q) {
    if (empty(q))
    {
        return -1;
    }
    node* p = q->front;
    int value = p->data;
    q->front = q->front->next;
    p->next = NULL;
    free(p);
    q->size--;

    if (empty(q))
    {
        q->rear = NULL;
    }
    
    return value;
}

// Opgave 4
void push(int element, node **head) {

}

int pop(node **head) {
    return -1;
}

void enqueueStack(queue *q, int x) {

}

int dequeueStack(queue *q) {
    return -1;
}