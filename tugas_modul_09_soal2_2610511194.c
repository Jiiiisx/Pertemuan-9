/*
Nama      : Muhamad Razzy Muflih
NIM       : 2610511194
Kelas     : E
Modul     : 9
Deskripsi : Menghitung pangkat secara rekursif beserta jumlah langkah
            pemanggilan fungsi menggunakan parameter pointer.
*/

#include <stdio.h>

int pangkat_rekursif(int basis, int pangkat, int *jumlah_langkah);

int main(void)
{
    int basis;
    int pangkat;
    int jumlah_langkah = 0;
    int hasil;

    if (scanf("%d %d", &basis, &pangkat) != 2)
    {
        return 1;
    }

    hasil = pangkat_rekursif(basis, pangkat, &jumlah_langkah);

    printf("========================================\n");
    printf("     PANGKAT REKURSIF DENGAN LANGKAH    \n");
    printf("========================================\n");
    printf("Basis          : %d\n", basis);
    printf("Pangkat        : %d\n", pangkat);
    printf("----------------------------------------\n");
    printf("Hasil          : %d\n", hasil);
    printf("Jumlah langkah : %d\n", jumlah_langkah);
    printf("========================================\n");

    return 0;
}

int pangkat_rekursif(int basis, int pangkat, int *jumlah_langkah)
{
    /* Setiap kali fungsi dipanggil (termasuk saat base case), langkah bertambah 1 */
    (*jumlah_langkah)++;

    if (pangkat == 0)
    {
        return 1; /* base case */
    }

    return basis * pangkat_rekursif(basis, pangkat - 1, jumlah_langkah); /* recursive case */
}