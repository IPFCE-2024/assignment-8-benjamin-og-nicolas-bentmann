#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void drawQueue(queue* q){
    node* n = q->front;
    while (n != NULL)
    {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("NULL\n");
    
}

int main(){
    queue q;
    initialize(&q);

    enqueueStack(&q, 8);
    enqueueStack(&q, 17);
    enqueueStack(&q, 2);

    drawQueue(&q);

    printf("%d\n", dequeueStack(&q));
    drawQueue(&q);
    printf("%d\n", dequeueStack(&q));
    drawQueue(&q);
    printf("%d\n", dequeueStack(&q));
    drawQueue(&q);

    enqueueStack(&q, 98);
    enqueueStack(&q, 20);

    drawQueue(&q);
    
}