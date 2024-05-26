#include <stdbool.h>
#include <stdio.h>

const int MAX_SIZE = 10;
typedef struct
{
    int arr[10];
    int top;
} Stack;

void initialize(Stack *stackAddr)
{
    stackAddr->top = -1;
}

bool isFull(Stack *stackAddr)
{
    return stackAddr->top == MAX_SIZE - 1 ? true : false;
}
void push(Stack *stackAddr, int value)
{
    if (isFull(stackAddr))
    {
        return;
    }
    stackAddr->top += 1;
    stackAddr->arr[stackAddr->top] = value;
}
int size(Stack *stackAddr)
{
    // return sizeof(stackAddr->arr) / sizeof(int);
    return sizeof(stackAddr->arr) / sizeof(stackAddr->arr[0]);
}
int pop(Stack *stackAddr)
{
    int popped = stackAddr->arr[stackAddr->top];
    stackAddr->top -= 1;
    return popped;
}

int peek(Stack *stackAddr)
{
    return stackAddr->arr[stackAddr->top];
}
bool isEmpty(Stack *stackAddr)
{
    return stackAddr->top == -1 ? true : false;
}

// Variables
// Pointer
// Peek
//
// --- Operations
// push v
// pop v
// peek v
// isEmpty v
// size - how many elements

int main(void)
{
    printf("Hello World!\n");
    Stack myStack;
    initialize(&myStack);

    printf("IsEmpty: %s\n", isEmpty(&myStack) ? "true" : "false");

    push(&myStack, 1);
    push(&myStack, 2);
    push(&myStack, 3);
    printf("%d\n", peek(&myStack));
    push(&myStack, 5);
    push(&myStack, 6);
    printf("%d\n", peek(&myStack));
    pop(&myStack);
    push(&myStack, 9);
    printf("%d\n", peek(&myStack));
    push(&myStack, 10);
    push(&myStack, 10);
    push(&myStack, 10);
    push(&myStack, 10);
    push(&myStack, 11);
    push(&myStack, 14);
    printf("IsEmpty: %s\n", isEmpty(&myStack) ? "true" : "false");
    printf("IsFull: %s\n", isFull(&myStack) ? "true" : "false");
    printf("Size of Stack: %d\n", size(&myStack));
    printf("%d\n", peek(&myStack));
    // printf("%d", myStack.arr[0]);
    return 0;
}
