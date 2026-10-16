#include <stdio.h>

/* Function prototype */
void tampilkan_judul(void);
double hitung_luas(double panjang, double lebar);
double hitung_keliling(double panjang, double lebar);
void tampilkan_hasil(
    double panjang,
    double lebar,
    double luas,
    double keliling
);

int main(void)
{
    double panjang;
    double lebar;
    double luas;
    double keliling;

    tampilkan_judul();

    printf("Masukkan panjang: ");
    scanf("%lf", &panjang);

    printf("Masukkan lebar: ");
    scanf("%lf", &lebar);

    if ((panjang <= 0.0) || (lebar <= 0.0))
    {
        printf("Panjang dan lebar harus lebih besar dari nol.\n");
        return 1;
    }

    luas = hitung_luas(panjang, lebar);
    keliling = hitung_keliling(panjang, lebar);

    tampilkan_hasil(panjang, lebar, luas, keliling);

    return 0;
}

void tampilkan_judul(void)
{
    printf("========================================\n");
    printf("     PRAKTIKUM FUNGSI DAN MODULAR       \n");
    printf("========================================\n");
}

double hitung_luas(double panjang, double lebar)
{
    return panjang * lebar;
}

double hitung_keliling(double panjang, double lebar)
{
    return 2.0 * (panjang + lebar);
}

void tampilkan_hasil(
    double panjang,
    double lebar,
    double luas,
    double keliling
)
{
    printf("\nHASIL PERHITUNGAN\n");
    printf("Panjang  : %.2f\n", panjang);
    printf("Lebar    : %.2f\n", lebar);
    printf("Luas     : %.2f\n", luas);
    printf("Keliling : %.2f\n", keliling);
}