#include <stdio.h>

int main() {
    char mssv[] = "12345678";
    char hoTen[] = "Nguyen Van A";

    float toan = 9.0;
    float ly = 8.0;
    float hoa = 9.0;

    float diemTrungBinh = (toan * 2 + ly + hoa) / (float)4;

    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh);

    return 0;
}