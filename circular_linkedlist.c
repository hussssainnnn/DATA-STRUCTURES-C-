#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Traverse circular linked list
void traverse(struct Node *head) {
    if (head == NULL) return;

    struct Node *t = head;
    do {
        printf("%d ", t->data);
        t = t->next;
    } while (t != head);
    printf("\n");
}

// Insert at beginning
struct Node* insertBegin(struct Node *head, int x) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = x;

    if (head == NULL) {
        n->next = n;   // self loop
        return n;
    }

    struct Node *t = head;
    while (t->next != head) t = t->next;

    n->next = head;
    t->next = n;
    return n;  // new head
}

// Insert at end
struct Node* insertEnd(struct Node *head, int x) {
    struct Node *n = malloc(sizeof(struct Node));
    n->data = x;

    if (head == NULL) {
        n->next = n;
        return n;
    }

    struct Node *t = head;
    while (t->next != head) t = t->next;

    t->next = n;
    n->next = head;
    return head;
}

// Insert at given position (1-based)
struct Node* insertPos(struct Node *head, int x, int pos) {
    if (pos == 1)
        return insertBegin(head, x);

    struct Node *n = malloc(sizeof(struct Node));
    n->data = x;

    struct Node *t = head;
    for (int i = 1; i < pos - 1; i++) {
        if (t->next == head) return head; // out of range
        t = t->next;
    }

    n->next = t->next;
    t->next = n;

    return head;
}

int main() {
    struct Node *head = NULL;

    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    traverse(head);

    head = insertBegin(head, 5);
    traverse(head);

    head = insertEnd(head, 40);
    traverse(head);

    head = insertPos(head, 25, 3);
    traverse(head);

    return 0;
}
