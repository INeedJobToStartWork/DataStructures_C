
#include <stdlib.h>

#ifndef LINKEDLIST
#define LINKEDLIST

typedef struct node_t
{
    int value;
    struct node_t *next;
} node_t;

node_t *newLinkList(int value)
{
    node_t *nodeElement = (node_t *)calloc(1, sizeof(node_t));
    if (nodeElement == NULL)
    {
        return NULL; // Obsługa błędu alokacji pamięci
    }
    nodeElement->value = value;
    nodeElement->next = NULL;
    return nodeElement;
}

// I want to do that to in future use `free(nodeElement)` in other func but with this pointer

void push(node_t *firstNode, int value)
{
    node_t *last = firstNode;
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = (node_t *)calloc(1, sizeof(node_t));
    // if (last->next == NULL)
    //     return NULL;
    last->next->value = value;
    last->next->next = NULL;
    // return value;
}
void pop(node_t *firstNode)
{
    node_t *last = NULL;
    node_t *current = firstNode;
    while (current->next != NULL)
    {
        last = current;
        current = current->next;
    }
    free(current);
    if (last != NULL)
    {
        last->next = NULL;
    }
}
int sizeOfLinkedList(node_t *firstNode)
{
    int counter = 1;
    node_t *last = firstNode;
    while (last->next != NULL)
    {
        last = last->next;
        counter++;
    }
    return counter;
}

// void insert(node_t *firstNode, int index, int value)
// {
//     node_t *prev = &firstNode;
//     for (int i = 0; i < index; i++)
//     {
//         if (i == index)
//         {
//             prev->value = value;
//         }
//         else if (prev->next == NULL)
//         {
//             prev->next = (node_t *)calloc(1, sizeof(node_t));
//             continue;
//         }
//         prev = prev->next;
//     }
// };
// void remove(int *arr, int index) {};
int search(node_t *firstNode, int target)
{
    node_t *last = firstNode;
    int counter = 0;
    while (last != NULL & last->value != target)
    {
        last = last->next;
        counter++;
    }
    return counter;

    // for (; last->next != NULL; i++)
    // {
    //     if (firstNode->value == target)
    //     {
    //         return i;
    //     }
    //     i++;
    // }

    // int index = 0;
    // node_t *last = firstNode;

    // while (last->value != target | last->next != NULL)
    // {
    //     last = last->next;
    //     index++;
    // }
    // if()
    // return index;
    // do
    // {

    //     if (last->value == target)
    //         return counter;
    //     counter++;
    //     last = last->next;
    // } while (last->next != NULL);
    // return -1;
};
int searchALL(node_t *firstNode, int target)
{
    node_t *last = firstNode;
    int counter = 0;
    while (last != NULL)
    {
        if (last->value == target)
            counter++;
        last = last->next;
    }
    return counter;

    // for (; last->next != NULL; i++)
    // {
    //     if (firstNode->value == target)
    //     {
    //         return i;
    //     }
    //     i++;
    // }

    // int index = 0;
    // node_t *last = firstNode;

    // while (last->value != target | last->next != NULL)
    // {
    //     last = last->next;
    //     index++;
    // }
    // if()
    // return index;
    // do
    // {

    //     if (last->value == target)
    //         return counter;
    //     counter++;
    //     last = last->next;
    // } while (last->next != NULL);
    // return -1;
};
void display(node_t *firstNode)
{
    node_t *current = firstNode;
    int i = 0;
    while (current != NULL)
    {
        printf("[%d] v:%d\tn:%p\n", i, current->value, current->next);
        current = current->next;
        i++;
    }
};

#endif

//      LINKED LISTS
// ----  TYPES (Pointers)
// Single [X]
// Double []
// ---- TYPES (first and last pointer)
// Basic (nulls) [X]
// Circular []
// ---- Functions
// SINGLE)
// push   [X]
// pop   [X]
// insert   []
// remove   []
// search   [X]
// searchALL[X]
// display  [X]
// sizeOfLinkedList[X]
// --   --
// DOUBLE)
// push   [X]
// pop   []
// insert   []
// remove   []
// search   [X]
// searchALL[X]
// display  [X]
// sizeOfLinkedList[X]