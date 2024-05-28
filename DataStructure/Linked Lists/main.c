#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main(void)
{
    // Memory Leak?
    node_t *myList = newLinkList(10);
    push(myList, 23);
    push(myList, 24);
    push(myList, 24);
    push(myList, 24);
    push(myList, 24);
    push(myList, 24);
    push(myList, 26);
    if (myList == NULL)
    {
        return 1;
    }
    display(myList);
    printf("Counter: %d\n", sizeOfLinkedList(myList));
    printf("Index: %d\n", search(myList, 24));
    printf("COUNTED 24: %d\n", searchALL(myList, 24));

    free(myList);
    return 0;
}