#include <stdio.h>
int main() {
    float Toan, Ly, Hoa;
    float DiemTrungBinh;
    printf("Nhap diem Toan: ");
    scanf("%f", &Toan);
    printf("Nhap diem Ly: ");
    scanf("%f", &Ly);
    printf("Nhap diem Hoa: ");
    scanf("%f", &Hoa);
    DiemTrungBinh = (Toan * 3 + Ly * 2 + Hoa * 1) / 6;
    printf("Diem trung binh: %.2f\n", DiemTrungBinh);
    return 0;
}