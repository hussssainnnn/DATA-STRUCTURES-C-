#include <stdio.h>

int main() {
    int a[50], size, num, pos;

    // Step 1: Input array size
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Step 3: Input new element and position
    printf("Enter the number to insert: ");
    scanf("%d", &num);

    printf("Enter the position (1 to %d): ", size + 1);
    scanf("%d", &pos);

    // Step 4: Validate position
    if (pos < 1 || pos > size + 1) {
        printf("Invalid position! Please enter position between 1 and %d.\n", size + 1);
        return 0;
    }

    // Step 5: Shift elements to the right
    for (int i = size - 1; i >= pos - 1; i--) {
        a[i + 1] = a[i];
    }

    // Step 6: Insert the new element
    a[pos - 1] = num;

    // Step 7: Increase size
    size++;

    // Step 8: Display the new array
    printf("\nArray after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
