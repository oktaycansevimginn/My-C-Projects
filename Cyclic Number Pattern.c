#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a positive number: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    for (b = 1; b <= a; b++) {
        printf("%d", b);
    }
    printf("\n\n");

    for (b = 1; b <= a; b++) {
        int temp = b;
        for (c = 1; c <= a; c++) {
            printf("%d", temp);
            temp = temp % a + 1;
        }
        printf("\n");
    }

    return 0;
}

