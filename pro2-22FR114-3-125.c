#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int* data;
    int front;
    int rear;
    int size;
} Queue;


typedef struct {
    int* data;
    int top;
    int size;
} Stack;


void initializeQueue(Queue* queue, int size) {
    queue->data = (int*)malloc(sizeof(int) * size);
    queue->front = -1;
    queue->rear = -1;
    queue->size = size;
}


void enqueue(Queue* queue, int data) {
    if (queue->rear == queue->size - 1) {
        printf("キューが満杯です\n");
        return;
    }

    if (queue->front == -1) {
        queue->front = 0;
    }

    queue->rear++;
    queue->data[queue->rear] = data;
}


int dequeue(Queue* queue) {
    if (queue->front == -1 || queue->front > queue->rear) {
        printf("キューが空です\n");
        return -1;
    }

    int data = queue->data[queue->front];
    queue->front++;

    if (queue->front > queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    }

    return data;
}


void initializeStack(Stack* stack, int size) {
    stack->data = (int*)malloc(sizeof(int) * size);
    stack->top = -1;
    stack->size = size;
}


void push(Stack* stack, int data) {
    if (stack->top == stack->size - 1) {
        printf("スタックが満杯です\n");
        return;
    }

    stack->top++;
    stack->data[stack->top] = data;
}


int pop(Stack* stack) {
    if (stack->top == -1) {
        printf("スタックが空です\n");
        return -1;
    }

    int data = stack->data[stack->top];
    stack->top--;

    return data;
}

int main() {
    int size = 5;

   
    Queue queue;
    initializeQueue(&queue, size);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    printf("%d\n", dequeue(&queue));
    printf("%d\n", dequeue(&queue));

   
    Stack stack;
    initializeStack(&stack, size);

    push(&stack, 4);
    push(&stack, 5);
    push(&stack, 6);

    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));

    return 0;
}
