#include <stdio.h>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: %d, %d\n", a, b);
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("\n Original Numbers \n");
    printf("n1 = %d, n2 = %d\n", n1, n2);

    printf("\n Swap Without Pointers \n");
    swapByValue(n1, n2);
    printf("n1 = %d, n2 = %d (No change!)\n", n1, n2);

    printf("\n Swap With Pointers \n");
    swapByReference(&n1, &n2);
    printf("n1 = %d, n2 = %d (Swapped!)\n", n1, n2);

    return 0;
}