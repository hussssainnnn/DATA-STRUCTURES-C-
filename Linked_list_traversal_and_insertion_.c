#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Traverse the linked list
void LinkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Insert at beginning
struct Node* insertAtFirst(struct Node *head, int data) {
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

// Insert at end
struct Node* insertAtEnd(struct Node *head, int data) {
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = NULL;

    struct Node *temp = head;

    // Move to last node
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = ptr;
    return head;
}

// Insert at specific position
struct Node* insertAtPosition(struct Node *head, int data, int pos) {
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *temp = head;
    int i = 1;

    // Move to (pos-1)th node
    while (i < pos - 1) {
        temp = temp->next;
        i++;
    }

    ptr->next = temp->next;
    temp->next = ptr;

    return head;
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocate memory
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third  = (struct Node*)malloc(sizeof(struct Node));

    // Link nodes
    head->data = 11;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 7;
    third->next = NULL;

    printf("Before insertion:\n");
    LinkedListTraversal(head);

    head = insertAtFirst(head, 69);
    head = insertAtEnd(head, 99);
    head = insertAtPosition(head, 55, 3); // insert at position 3

    printf("\nAfter insertion:\n");
    LinkedListTraversal(head);

    return 0;
}
