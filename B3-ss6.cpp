#include <stdio.h>
#include <string.h>

int main() {
    char password[20] = "123456"; // Mat khau duoc khai bao truoc
    char userInput[20];          // Bien luu mat khau nguoi dung nhap

    printf("Nhap mat khau: ");
    scanf("%s", userInput); // Nhap mat khau tu ban phim

    // Kiem tra mat khau
    if (strcmp(password, userInput) == 0) {
        printf("Mat khau chinh xac!\n");
    } else {
        printf("Mat khau sai. Vui long thu lai.\n");
    }

    return 0;
}

