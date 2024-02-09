#include <stdio.h>
int i;
int main()
{
    system("cls");
    float x, y, z;
    printf("=======Selamat Datang Di========\n");
    printf("======Kalkulator Sederhana======\n");
    printf("=======>_<Milik Rakensa>_<======\n");
    printf("\n");
    printf("=====Kamu pilih yang mana?=====\n");
    printf("1. Penjumlahan\n");
    printf("2. pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Pilih: ");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("Kamu memilih penjumlahan ^_^\n");
        printf("Masukkan angka 1= ");
        scanf("%f", &x);
        printf("Masukkan angka 2= ");
        scanf("%f", &y);
        z = x + y;
        printf("hasilnya adalah= %.f\n\n", z);
        printf("======Terima Kasih======\n");
        printf("SEMOGA HARIMU MENYENANGKAN");
        break;
    case 2:
        printf("Kamu memilih pengurangan ^_^\n");
        printf("Masukkan angka 1= ");
        scanf("%f", &x);
        printf("Masukkan angka 2= ");
        scanf("%f", &y);
        z = x - y;
        printf("hasilnya adalah= %.f\n\n", z);
        printf("======Terima Kasih======\n");
        printf("SEMOGA HARIMU MENYENANGKAN");
        break;
    case 3:
        printf("Kamu memilih perkalian ^_^\n");
        printf("Masukkan angka 1= ");
        scanf("%f", &x);
        printf("Masukkan angka 2= ");
        scanf("%f", &y);
        z = x * y;
        printf("hasilnya adalah= %.f\n\n", z);
        printf("======Terima Kasih======\n");
        printf("SEMOGA HARIMU MENYENANGKAN");
        break;
    case 4:
        printf("Kamu memilih pembagian ^_^\n");
        printf("Masukkan angka 1= ");
        scanf("%f", &x);
        printf("Masukkan angka 2= ");
        scanf("%f", &y);
        z = x / y;
        printf("hasilnya adalah= %.2f\n\n", z);
        printf("======Terima Kasih======\n");
        printf("SEMOGA HARIMU MENYENANGKAN");
        break;
    default:
        printf("MILIH YANG BENER GOBLOK!!!-_-");
        break;
    }
    return 0;
}