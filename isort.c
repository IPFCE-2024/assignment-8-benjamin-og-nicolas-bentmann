#include "insertion_sort.h"
#include <stdio.h>

void drawList(node* n){
    while (n != NULL)
    {
        printf("%d -> ", n->data);
        n = n->next;
    }
    printf("NULL\n");
}

int main(){
    node p1;
    p1.data = 20; 
    p1.next = NULL;

    node p2;
    p2.data = 70; 
    p2.next = &p1;

    node p3;
    p3.data = 3; 
    p3.next = &p2;

    node p4;
    p4.data = 4; 
    p4.next = &p3;

    node p5;
    p5.data = 5; 
    p5.next = &p4;

    drawList(&p5);

    node * sorted = isort(&p5);

    drawList(&p5);
    drawList(sorted);

    return 0;
}