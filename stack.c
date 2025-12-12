#include <stdio.h>
#define SIZE 100

int stack[SIZE];
int top = -1;

// PUSH
void push(int x) {
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}

// POP
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

// PEEK
int peek() {
    if (top == -1) return -1;
    return stack[top];
}

// DISPLAY
void display() {
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);

    display();     // 30 20 10
    printf("Popped: %d\n", pop());
    printf("Top: %d\n", peek());
}
