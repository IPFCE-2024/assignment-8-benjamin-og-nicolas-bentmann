#include "queue.h"
#include <stdio.h>
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
/*Push funktionen*/
void push(int element, node **head) {
    node *ny_node = (node*)malloc(sizeof (node)); //Laver noden

    ny_node->data = element;
    ny_node->next = *head;

    *head = ny_node;

}

/*Pop funktionen*/
int pop(node **head) {
    if (*head == NULL) {
        printf("Uhadada stakken er jo tom?!?!\n");
        return -1;
    }

int gemt = (*head)->data;

node *midlertidig = *head;
*head = (*head)->next;

free(midlertidig);

return gemt;
}

void enqueueStack(queue *q, int x) {
    push(x, &(q->front));
    q->size++;
}

int dequeueStack(queue *q) {
    if (empty(q))
    {
        printf("the stack is empty");
        return -1;
    }

    stack s;
    s.head = NULL;

    for (int i = q->size; i > 1; i--)
    {
        push(pop(&(q->front)), &(s.head));
    }
    

    int buf = pop(&(q->front));

    for (int i = 0; i < q->size - 1; i++)
    {
        push(pop(&(s.head)), &(q->front));
    }
    q->size--;
    return buf;
}