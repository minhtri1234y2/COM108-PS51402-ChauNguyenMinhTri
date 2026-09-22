#include <stdio.h>

int main() {
    float Toan, Ly, Hoa;
    float DiemTrungBinh;

    // Nhap diem
    printf("Nhap diem Toan: ");
    scanf("%f", &Toan);

    printf("Nhap diem Ly: ");
    scanf("%f", &Ly);

    printf("Nhap diem Hoa: ");
    scanf("%f", &Hoa);

    // Tinh diem trung binh
    DiemTrungBinh = (Toan * 3 + Ly * 2 + Hoa * 1) / 6;

    // Xuat ket qua
    printf("Diem trung binh: %.2f\n", DiemTrungBinh);

    return 0;
}