#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    // Nhap vao cac he so a, b, c
    printf("Nhap vao he so a: ");
    scanf("%f", &a);
    printf("Nhap vao he so b: ");
    scanf("%f", &b);
    printf("Nhap vao he so c: ");
    scanf("%f", &c);

    // Kiem tra neu a = 0 thi phuong trinh khong phai bac 2
    if (a == 0) {
        printf("Ðay khong phai la phuong trinh bac 2.\n");
    } else {
        // Tinh delta
        delta = b * b - 4 * a * c;

        // Xet cac truong hop cua delta
        if (delta > 0) {
            // Phuong trinh co 2 nghiem phan biet
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f và x2 = %.2f\n", x1, x2);
        } else if (delta == 0) {
            // Phuong trinh co nghiem kep
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x1);
        } else {
            // Phuong trinh vo nghiem
            printf("Phuong trinh vo nghiem.\n");
        }
    }

    return 0;
}
