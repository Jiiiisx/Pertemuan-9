#include <stdio.h>

/* Function prototype */
int hitung_jam(int total_detik);
int hitung_sisa_setelah_jam(int total_detik);
int hitung_menit(int sisa_detik);
int hitung_detik(int sisa_detik);
void tampilkan_waktu(
    int total_detik,
    int jam,
    int menit,
    int detik
);

int main(void)
{
    int total_detik;
    int jam;
    int menit;
    int detik;
    int sisa;

    printf("Masukkan total detik: ");
    scanf("%d", &total_detik);

    if (total_detik < 0)
    {
        printf("Total detik tidak boleh negatif.\n");
        return 1;
    }

    jam = hitung_jam(total_detik);
    sisa = hitung_sisa_setelah_jam(total_detik);
    menit = hitung_menit(sisa);
    detik = hitung_detik(sisa);

    tampilkan_waktu(total_detik, jam, menit, detik);

    return 0;
}

int hitung_jam(int total_detik)
{
    return total_detik / 3600;
}

int hitung_sisa_setelah_jam(int total_detik)
{
    return total_detik % 3600;
}

int hitung_menit(int sisa_detik)
{
    return sisa_detik / 60;
}

int hitung_detik(int sisa_detik)
{
    return sisa_detik % 60;
}

void tampilkan_waktu(
    int total_detik,
    int jam,
    int menit,
    int detik
)
{
    printf("%d detik setara dengan:\n", total_detik);
    printf("%d jam\n", jam);
    printf("%d menit\n", menit);
    printf("%d detik\n", detik);
}