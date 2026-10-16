#include <stdio.h>

/* Prototype yang sudah diperbaiki */
double hitung_luas(double jari_jari);
double hitung_keliling(double jari_jari);

int main(void)
{
    double jari_jari;
    double luas;
    double keliling;

    printf("Masukkan jari-jari: ");
    scanf("%lf", &jari_jari);

    /* Validasi jari-jari ditambahkan */
    if (jari_jari <= 0.0)
    {
        printf("Jari-jari harus lebih besar dari nol.\n");
        return 1;
    }

    luas = hitung_luas(jari_jari);
    keliling = hitung_keliling(jari_jari);

    printf("Luas     : %.2f\n", luas);
    printf("Keliling : %.2f\n", keliling);

    return 0;
}

/* Tipe kembalian disesuaikan menjadi double */
double hitung_luas(double jari_jari)
{
    const double PHI = 3.141592653589793;
    return PHI * jari_jari * jari_jari;
}

/* Ditambahkan kata kunci return */
double hitung_keliling(double jari_jari)
{
    const double PHI = 3.141592653589793;
    return PHI * 2.0 * jari_jari;
}