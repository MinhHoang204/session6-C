#include <stdio.h>

int main() {
    int numbers[5];
    int sumOdd = 0;

    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So %d: ", i + 1);
        scanf("%d", &numbers[i]);

        // Kiem tra so le và cong vào tong
        if (numbers[i] % 2 != 0) {
            sumOdd += numbers[i];
        }
    }

    printf("Tong cac so le la: %d\n", sumOdd);

    return 0;
}

