#include <stdio.h>

double tambah(double a, double b);
double kurang(double a, double b);
double kali(double a, double b);
double bagi(double a, double b);
void tampilkan_menu(void);

int main(void)
{
    int pilihan;
    double angka_1;
    double angka_2;
    double hasil;

    tampilkan_menu();
    printf("Pilih operasi (1-4): ");
    scanf("%d", &pilihan);

    if ((pilihan < 1) || (pilihan > 4))
    {
        printf("Pilihan menu tidak valid.\n");
        return 1;
    }

    printf("Masukkan bilangan pertama : ");
    scanf("%lf", &angka_1);
    printf("Masukkan bilangan kedua   : ");
    scanf("%lf", &angka_2);

    switch (pilihan)
    {
        case 1:
            hasil = tambah(angka_1, angka_2);
            printf("Hasil: %.2f\n", hasil);
            break;
        case 2:
            hasil = kurang(angka_1, angka_2);
            printf("Hasil: %.2f\n", hasil);
            break;
        case 3:
            hasil = kali(angka_1, angka_2);
            printf("Hasil: %.2f\n", hasil);
            break;
        case 4:
            if (angka_2 == 0.0)
            {
                printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
                return 1;
            }
            hasil = bagi(angka_1, angka_2);
            printf("Hasil: %.2f\n", hasil);
            break;
    }

    return 0;
}

void tampilkan_menu(void)
{
    printf("========================================\n");
    printf("           KALKULATOR MODULAR           \n");
    printf("========================================\n");
    printf("1. Tambah\n");
    printf("2. Kurang\n");
    printf("3. Kali\n");
    printf("4. Bagi\n");
    printf("========================================\n");
}

double tambah(double a, double b)
{
    return a + b;
}

double kurang(double a, double b)
{
    return a - b;
}

double kali(double a, double b)
{
    return a * b;
}

double bagi(double a, double b)
{
    return a / b;
}   