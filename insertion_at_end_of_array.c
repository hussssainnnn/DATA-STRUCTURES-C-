#include <stdio.h>

int main() {
    int a[50], size, num;

    // Step 1: Input array size
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Step 2: Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Step 3: Input new element to insert at the end
    printf("Enter the number to insert at the end: ");
    scanf("%d", &num);

    // Step 4: Insert at end
    a[size] = num;  // new element goes after the last existing element
    size++;         // increase size

    // Step 5: Display the array after insertion
    printf("\nArray after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
