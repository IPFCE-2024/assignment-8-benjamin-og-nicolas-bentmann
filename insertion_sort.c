#include "insertion_sort.h"
#include <stdlib.h>

//Opgave 2.

node* isort(node *list) {

    node* oldList = list->next;
    node* newList = list;

    list->next = NULL;
    /*Ydrer-løkke, går gennem alle noder i oldList, hvor
    de sættes ind i newList*/
    while (oldList != NULL)
    {
        node* cursor = newList;
        node* preCursor = NULL;
        while (cursor != NULL) /*Indrer-løkke, finder den rigtige position i newList*/
        {
            if (oldList->data > cursor->data)
            {
                preCursor = cursor;
                cursor = cursor->next;
            }
            else
            {
                break;
            }
        }

        node* p = oldList->next;
        oldList->next = cursor;
        if (preCursor == NULL)
        {
            newList->next = oldList;
        }
        else
        {
            preCursor->next = oldList;
        }

        oldList = p;
    }
    return newList; /*Her returneres den nye sorterede liste.*/
}

