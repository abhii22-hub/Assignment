#include <stdio.h>

int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter the number of integers (N): ");
    scanf("%d", &n);

    int arr[n], evenArr[n], oddArr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount] = arr[i];
            evenCount++;
        } else {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }
    printf("\nEven numbers: ");
    if (evenCount == 0) {
        printf("None");
    } else {
        for (i = 0; i < evenCount; i++) {
            printf("%d ", evenArr[i]);
        }
    }
    printf("\nOdd numbers: ");
    if (oddCount == 0) {
        printf("None");
    } else {
        for (i = 0; i < oddCount; i++) {
            printf("%d ", oddArr[i]);
        }
    }
    printf("\n");
    return 0;
}