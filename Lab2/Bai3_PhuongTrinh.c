#include <stdio.h>

int main() {
    float a, b, x;

    // Nhap a va b
    printf("Nhap he so a: ");
    scanf("%f", &a);

    printf("Nhap he so b: ");
    scanf("%f", &b);

    // Tinh nghiem
    x = -b / a;

    // Xuat ket qua
    printf("Nghiem cua phuong trinh la: x = %.2f\n", x);

    return 0;
}