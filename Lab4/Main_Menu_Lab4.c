#include <stdio.h>

void printMenu();
void tinhTBC();
void ktSoNguyenTo();
void ktSoChinhPhuong();

int main()
{
    int luaChon;

    do
    {
        printMenu();
        scanf("%d", &luaChon);

        switch (luaChon)
        {
        case 1:
            tinhTBC();
            break;
        case 2:
            ktSoNguyenTo();
            break;
        case 3:
            ktSoChinhPhuong();
            break;
        case 4:
            printf("Thoat chuong trinh!\n");
            break;
        default:
            printf("Chi nhap 1 - 4!\n");
        }
    } while (luaChon != 4);

    return 0;
}

void printMenu()
{
    printf("\n");
    printf("+--------------------------------------------------+\n");
    printf("|              CHUONG TRINH LAB 4                 |\n");
    printf("+--------------------------------------------------+\n");
    printf("| 1. Tinh TBC cac so chia het cho 2               |\n");
    printf("| 2. Kiem tra so nguyen to                        |\n");
    printf("| 3. Kiem tra so chinh phuong                     |\n");
    printf("| 4. Thoat chuong trinh                           |\n");
    printf("+--------------------------------------------------+\n");
    printf(">> Moi ban chon: ");
}

void tinhTBC()
{
    int min, max, tong = 0, dem = 0;

    printf("Nhap min, max: ");
    scanf("%d%d", &min, &max);

    if (min > max)
    {
        printf("Khoang khong hop le!\n");
        return;
    }

    for (int i = min; i <= max; i++)
    {
        if (i % 2 == 0)
        {
            tong += i;
            dem++;
        }
    }

    if (dem == 0)
        printf("Khong co so chia het cho 2!\n");
    else
        printf("TBC = %.2f\n", (float)tong / dem);
}

void ktSoNguyenTo()
{
    int x, dem = 0;

    printf("Nhap x: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)
        if (x % i == 0)
            dem++;

    if (x >= 2 && dem == 2)
        printf("%d la so nguyen to.\n", x);
    else
        printf("%d khong phai so nguyen to.\n", x);
}

void ktSoChinhPhuong()
{
    int x, flag = 0;

    printf("Nhap x: ");
    scanf("%d", &x);

    for (int i = 0; i * i <= x; i++)
    {
        if (i * i == x)
        {
            flag = 1;
            break;
        }
    }

    if (x >= 0 && flag)
        printf("%d la so chinh phuong.\n", x);
    else
        printf("%d khong phai so chinh phuong.\n", x);
}
