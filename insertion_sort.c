#include "insertion_sort.h"
#include <stdlib.h>

node* isort(node *list) {

    node* oldList = list->next;
    node* newList = list;

    list->next = NULL;

    while (oldList != NULL)
    {
        node* cursor = newList;
        node* preCursor = NULL;
        while (cursor != NULL)
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
    return newList;
}

