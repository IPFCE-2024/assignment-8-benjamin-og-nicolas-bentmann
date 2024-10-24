#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "queue.h"
/*
void check(queue* q){
    if (q->front == NULL)
    {
        printf("front = NULL\n");
    }
    else
    {
        printf("%d\n", q->front->data);
    }
    if (q->rear == NULL)
    {
        printf("rear = NULL\n");
    }
    else
    {
        printf("%d\n", q->rear->data);
    }
    printf("%d\n", q->size);

}
*/

int main() {
    queue q;

    initialize(&q);

    if (empty(&q))
    {
        printf("queue is empty\n");
    }
    else
    {
       printf("queue is not empty\n"); 
    }

    int x = 6;

    enqueue(&q, x);
    int y = dequeue(&q);

    if (empty(&q))
    {
        printf("queue is empty\n");
    }
    else
    {
       printf("queue is not empty\n"); 
    }

    printf("x = %d, y = %d: ", x, y);
    if (x == y)
    {
        printf("x and y are equal\n");
    }
    else
    {
        printf("x and y are not equal\n");
    }

    
    int x0 = 17;
    int x1 = 92;

    enqueue(&q, x0);
    enqueue(&q, x1);

    int y0 = dequeue(&q);
    int y1 = dequeue(&q);


    printf("x0 = %d, x1 = %d, y0 = %d, y1 = %d: ", x0, x1, y0, y1);

    
    if (x0 == y0)
    {
        printf("x0 and y0 are equal, ");
    }
    else
    {
        printf("x0 and y0 are not equal, ");
    }
    if (x1 == y1)
    {
        printf("x1 and y1 are equal\n");
    }
    else
    {
        printf("x1 and y1 are not equal\n");
    }
}