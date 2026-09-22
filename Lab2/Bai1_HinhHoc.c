#include <stdio.h>
#define PI 3.14159
int main()
{
    float chieudai;
    float chieurong;
    float chuvi;
    float dientich;
    printf("Nhap chieu dai: "); scanf("%f", &chieudai);
    printf("Nhap chieu rong: ");scanf("%f", &chieurong);
    chuvi = 2 * (chieudai + chieurong);
    dientich = chieudai * chieurong;
    printf("Chu vi hinh chu nhat: %.2f\n", chuvi);
    printf("Dien tich hinh chu nhat: %.2f\n", dientich);
    return 0;
}