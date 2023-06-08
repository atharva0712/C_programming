#include <stdio.h>
#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int isFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow! Cannot push element.\n");
        return;
    }
    stack->data[++stack->top] = value;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop element.\n");
        return -1; // or any other appropriate error value
    }
    return stack->data[stack->top--];
}

int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
        return -1; // or any other appropriate error value
    }
    return stack->data[stack->top];
}

int main() {
    int i,num,ele;
    Stack stack;
    initialize(&stack);

    printf("Enter the number of elements to push (Not more tha 100):\n");
    scanf("%d",&num);
    printf("Enter the elements:\n");
    for(i = 0; i < num; i++){
        scanf("%d",&ele);
        push(&stack, ele);
    }
    
    printf("Top element is: %d\n", peek(&stack));
    while (!isEmpty(&stack)) {
        int value = pop(&stack);
        printf("Popped element: %d\n", value);
    }
    return 0;
}
