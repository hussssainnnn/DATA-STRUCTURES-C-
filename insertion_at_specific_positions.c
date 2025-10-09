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

    // Step 3: Input new element and its position
    printf("Enter the number to insert: ");
    scanf("%d", &num);

    printf("Enter the position (1 to %d): ", size + 1);
    scanf("%d", &pos);

    // Step 4: Shift elements to the right
    for (int i = size - 1; i >= pos - 1; i--) {
        a[i + 1] = a[i];
    }

    // Step 5: Insert the new element
    a[pos - 1] = num;

    // Step 6: Increase size
    size++;

    // Step 7: Display the new array
    printf("\nArray after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
