#include <stdio.h>

int main() {
    char mssv[] = "PS51402";
    char hoTen[] = "Chau Nguyen Minh Tri";

    float toan = 9.0;
    float ly = 8.0;
    float hoa = 9.0;

    float diemTrungBinh = (toan * 2 + ly + hoa) / (float)4;

    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh);

    return 0;
}
