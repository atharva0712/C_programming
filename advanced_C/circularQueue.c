#include <stdio.h>
#define MAX_SIZE 5

typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} CircularQueue;

void enqueue(CircularQueue queue, int value) {
    if ((queue.rear + 1) % MAX_SIZE == queue.front) {
        printf("Queue is full\n");
    } else {
        queue.rear = (queue.rear + 1) % MAX_SIZE;
        queue.items[queue.rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

void dequeue(CircularQueue queue) {
    if (queue.front == queue.rear) {
        printf("Queue is empty\n");
    } else {
        queue.front = (queue.front + 1) % MAX_SIZE;
        printf("Dequeued: %d\n", queue.items[queue.front]);
    }
}

void display(CircularQueue queue) {
    int i;
    if (queue.front == queue.rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (i = (queue.front + 1) % MAX_SIZE; i != (queue.rear + 1) % MAX_SIZE; i = (i + 1) % MAX_SIZE) {
            printf("%d ", queue.items[i]);
        }
        printf("\n");
    }
}

int main() {
    CircularQueue queue;
    queue.front = MAX_SIZE - 1;
    queue.rear = 0;

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);
    enqueue(queue, 5);
    enqueue(queue, 6); // Queue is full

    display(queue); // Queue elements: 1 2 3 4 5

    dequeue(queue);
    dequeue(queue);

    display(queue); // Queue elements: 3 4 5

    return 0;
}
