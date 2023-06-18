#include <stdio.h>
#define MAX_SIZE 100

struct Stack {
    int data[MAX_SIZE];
    int top;
};

void initialize(struct Stack *stack) {
    stack->top = -1;
}

int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow! Cannot push element.\n");
        return;
    }
    stack->data[++stack->top] = value;
}

int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop element.\n");
        return -1; // or any other appropriate error value
    }
    return stack->data[stack->top--];
}

int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return -1; // or any other appropriate error value
    }
    return stack->data[stack->top];
}

int main() {
    int i, num, ele;
    struct Stack stack;
    initialize(&stack);

    printf("Enter the number of elements to push (Not more than 100):\n");
    scanf("%d", &num);
    printf("Enter the elements:\n");
    for (i = 0; i < num; i++) {
        scanf("%d", &ele);
        push(&stack, ele);
    }

    printf("Top element is: %d\n", peek(&stack));

    while (!isEmpty(&stack)) {
        int value = pop(&stack);
        printf("Popped element: %d\n", value);
    }
    return 0;
}
