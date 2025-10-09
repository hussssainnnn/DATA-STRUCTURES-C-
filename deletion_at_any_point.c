#include <stdio.h>

int main() {
    int a[50], size, pos, i, item;

    // Step 1: Input size of array
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Step 2: Input array elements
    printf("Enter elements of array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Step 3: Input position to delete
    printf("Enter position you want to delete: ");
    scanf("%d", &pos);

    // Step 4: Check for valid position
    if (pos <= 0 || pos > size) {
        printf("Invalid position!\n");
    } else {
        // Step 5: Store deleted element
        item = a[pos - 1];

        // Step 6: Shift elements left to fill gap
        for (i = pos - 1; i < size - 1; i++) {
            a[i] = a[i + 1];
        }

        // Step 7: Decrease array size
        size--;

        // Step 8: Print deleted element and updated array
        printf("Deleted element: %d\n", item);
        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}