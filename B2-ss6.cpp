#include <stdio.h>

int main() {
    int numbers[5];
    int evenCount = 0; // Bien dem so chan
    int oddCount = 0;  // Bien dem so le

    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Kiem tra so chan hay le
        if (numbers[i] % 2 == 0) {
            evenCount++; // Tang bien dem so chan
        } else {
            oddCount++;  // Tang bien dem so le
        }
    }

    printf("So luong so chan: %d\n", evenCount);
    printf("So luong so le: %d\n", oddCount);

    return 0;
}

