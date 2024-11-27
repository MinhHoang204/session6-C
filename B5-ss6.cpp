#include <stdio.h>

int main() {
    int year, month;
    int days;

    // Nhap vao nam
    printf("Nhap vao nam: ");
    scanf("%d", &year);

    // Nhap vao thang
    printf("Nhap vao thang: ");
    scanf("%d", &month);

    // Kiem tra thang va tinh so ngay
    if (month < 1 || month > 12) {
        printf("Thang khong hop le.\n");
    } else {
        switch (month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                days = 31;
                break;
            case 4: case 6: case 9: case 11:
                days = 30;
                break;
            case 2:
                // Kiem tra nam nhuan
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    days = 29;
                } else {
                    days = 28;
                }
                break;
        }
        printf("Thang %d nam %d co %d ngay.\n", month, year, days);
    }

    return 0;
}

