// #include <stdio.h>
// #include <string.h>

// // #include <math.h>

// // void hello(char name[], int looping)
// // {

// //     for (int i = 0; i != looping; i++)
// //         printf("Hello %s!\n", name);
// // }

// int main(void)
// {

//     // char message[] = "Hello World! \n";
//     // printf(message);

//     // hello("Daniel", 6);
//     // int tabela[] = {1, 2, 6, 8, 12, 4, 15, 632, 46};
//     // printf("%d \n", sizeof(tabela));
//     // printf("%d", sizeof(tabela) / sizeof(tabela[0]));

//     // int x = 10;

//     // int tablica = [1,"D",{"asd","d23"}] <---- Jak to zrobić?
//     // if(false) jmp cofka

//     // typedef struct
//     // {
//     //     char name[12];
//     //     int ping;
//     // } Player;

//     // Player player1 = {"Daniel", 123};
//     // Player player2 = {"Robert", 567};
//     // struct Player player1 = {"Daniel", 123};
//     // struct Player player2 = {"Robert", 567};

//     // player2.name = "Kubens";

//     // strcpy(player1.name, "Kubens");

//     // char a[] = "XX";
//     // char b = 'Y';
//     // char c = 'Z';

//     // printf("%s value\n", a);
//     // printf("%c value\n", b);
//     // printf("%c value\n", c);

//     // printf("%d bytes\n", sizeof(a));
//     // printf("%d bytes\n", sizeof(b));
//     // printf("%d bytes\n", sizeof(c));

//     // printf("%p addresses\n", &a);
//     // printf("%p addresses\n", &b);
//     // printf("%p addresses\n", &c);

//     // printf("%s %s", player1.name, player2.name);
//     // printf("%d %d", player1.ping, player2.ping);
//     // printf(player2.name);

//     // int age = 21;
//     // const int *proxyAge = &age;
//     // // printf(&age);
//     // printf("Age\n\nvalue:%d\naddress:%p\n", age, &age);
//     // printf("ProxyAge\n\nvalue:%p\naddress:%p", proxyAge, &proxyAge);

//     /**
//      * Note: The returned array must be malloced, assume caller calls free().
//      */
//     int twoSum( int nums, int target){

//         return 2;
//     }

//     printf("%s\n%s\n%s",twoSum({2,7,11,15},9),twoSum({3,2,4},6),twoSum())

//     return 0;
// }

// C Program to demonstrate how to Implement a queue
// #include <stdbool.h>
// #include <stdio.h>
// #define MAX_SIZE 100

// // Defining the Queue structure
// typedef struct
// {
//     int items[MAX_SIZE];
//     int front;
//     int rear;
// } Queue;

// // Function to initialize the queue
// void initializeQueue(Queue *q)
// {
//     q->front = -1;
//     q->rear = 0;
// }

// // Function to check if the queue is empty
// bool isEmpty(Queue *q) { return (q->front == q->rear - 1); }

// // Function to check if the queue is full
// bool isFull(Queue *q) { return (q->rear == MAX_SIZE); }

// // Function to add an element to the queue (Enqueue
// // operation)
// void enqueue(Queue *q, int value)
// {
//     if (isFull(q))
//     {
//         printf("Queue is full\n");
//         return;
//     }
//     q->items[q->rear] = value;
//     q->rear++;
// }

// // Function to remove an element from the queue (Dequeue
// // operation)
// void dequeue(Queue *q)
// {
//     if (isEmpty(q))
//     {
//         printf("Queue is empty\n");
//         return;
//     }
//     q->front++;
// }

// // Function to get the element at the front of the queue
// // (Peek operation)
// int peek(Queue *q)
// {
//     if (isEmpty(q))
//     {
//         printf("Queue is empty\n");
//         return -1; // return some default value or handle
//                    // error differently
//     }
//     return q->items[q->front + 1];
// }

// // Function to print the current queue
// void printQueue(Queue *q)
// {
//     if (isEmpty(q))
//     {
//         printf("Queue is empty\n");
//         return;
//     }

//     printf("Current Queue: ");
//     for (int i = q->front + 1; i < q->rear; i++)
//     {
//         printf("%d ", q->items[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     Queue q;
//     initializeQueue(&q);

//     // Enqueue elements
//     enqueue(&q, 10);
//     printQueue(&q);

//     enqueue(&q, 20);
//     printQueue(&q);

//     enqueue(&q, 30);
//     printQueue(&q);

//     // Peek front element
//     printf("Front element: %d\n", peek(&q));

//     // Dequeue an element
//     dequeue(&q);
//     printQueue(&q);

//     // Peek front element after dequeue
//     printf("Front element after dequeue: %d\n", peek(&q));

//     return 0;
// }
