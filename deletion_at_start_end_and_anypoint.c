#include <stdio.h>

int main() {
    int a[50], size, i, choice, pos, deleted;

    // Step 1: Input size of array
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Step 2: Input array elements
    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Step 3: Menu for deletion
    printf("\nChoose deletion option:\n");
    printf("1. Delete first element\n");
    printf("2. Delete last element\n");
    printf("3. Delete element at a specific position\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // Delete first element
            deleted = a[0];
            for (i = 0; i < size - 1; i++) {
                a[i] = a[i + 1];
            }
            size--;
            printf("Deleted first element: %d\n", deleted);
            break;

        case 2: // Delete last element
            deleted = a[size - 1];
            size--;
            printf("Deleted last element: %d\n", deleted);
            break;

        case 3: // Delete at specific position
            printf("Enter position to delete (1 to %d): ", size);
            scanf("%d", &pos);
            if (pos <= 0 || pos > size) {
                printf("Invalid position!\n");
                return 0;
            }
            deleted = a[pos - 1];
            for (i = pos - 1; i < size - 1; i++) {
                a[i] = a[i + 1];
            }
            size--;
            printf("Deleted element at position %d: %d\n", pos, deleted);
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }

    // Step 4: Print updated array
    printf("Array after deletion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
