#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// QUEUE
// constructor V
// enqueue (push) V
// dequeue (pop) V
// peek V
// peekLast V
// contains V +/-
// size (how many elements)
// isFull v
// isEmpty v

const int MAX_SIZE = 20;
const int MAX_SIZE_PER_SLOT = 20;

typedef struct
{
    char queue[20][20];
    int front;
    int back;
} Queue;

void constructor(Queue *queueAddr)
{
    queueAddr->front = -1;
    queueAddr->back = -1;
}
bool isFull(Queue *queueAddr)
{
    return queueAddr->back == sizeof(queueAddr);
}
bool isEmpty(Queue *queueAddr)
{
    return queueAddr->back == -1;
}
void enqueue(Queue *queueAddr, char value[])
{
    if (isFull(queueAddr))
        return;
    if (queueAddr->front == -1)
    {
        queueAddr->front = 0;
    }

    queueAddr->back += 1;
    for (int i = 0; i != MAX_SIZE_PER_SLOT - 1; i++)
    {
        queueAddr->queue[queueAddr->back][i] = value[i];
    }
}

void dequeue(Queue *queueAddr)
{
    char tempArr[20][20];

    for (int i = 0; i != sizeof(queueAddr->queue) / sizeof(queueAddr->queue[0]) - 1; i++)
    {
        for (int j = 0; j != sizeof(queueAddr->queue[i]) / sizeof(queueAddr->queue[i][0]); j++)
        {
            queueAddr->queue[i][j] = queueAddr->queue[i + 1][j];
        }
    }

    queueAddr->back -= 1;
    if (queueAddr->back == -1)
    {
        queueAddr->front = -1;
    }
}
char *peek(Queue *queueAddr)
{
    return queueAddr->queue[queueAddr->front];
};
char *peekLast(Queue *queueAddr)
{
    return queueAddr->queue[queueAddr->back];
}
int size(Queue *queueAddr)
{
    return queueAddr->back + 1;
}
void printArray(char value[])
{
    for (int i = 0; value[i] != '\0'; i++)
        printf("%c", value[i]);

    printf("\n");
}
bool contains(Queue *queueAddr, char findValue[])
{
    // Bugged
    bool found = false;
    for (int i = 0; i != 20; i++)
    {
        for (int j = 0; j != 20; j++)
        {
            if (queueAddr->queue[i][j] == '\0' || findValue[j] == '\0')
            {
                break;
            }
            if (queueAddr->queue[i][j] != findValue[j])
            {
                found = false;
                break;
            }
            found = true;
        }
        if (found)
        {
            break;
        }
    }

    return found;
}
int main(void)
{
    Queue myQueue;

    constructor(&myQueue);
    printf("IsEmpty: %s\n", isEmpty(&myQueue) ? "true" : "false");
    enqueue(&myQueue, "Daniel");
    enqueue(&myQueue, "Robert");
    enqueue(&myQueue, "Mariusz");
    // printArray(peek(&myQueue));
    // dequeue(&myQueue);
    // printArray(peek(&myQueue));
    // dequeue(&myQueue);
    // printArray(peekLast(&myQueue));
    // printf("IsEmpty: %s\n", isEmpty(&myQueue) ? "true" : "false");
    printf("Contains: %s\n", contains(&myQueue, "Mariaauszs") ? "true" : "false");
    // printf("Size: %d\n", size(&myQueue));

    // printArray(myQueue.queue[0]);
    // printf("%d", myQueue.back);
    return 0;
}