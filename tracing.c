#include <stdio.h>

int tambah(int a, int b);
int kali(int a, int b);
int proses(int nilai);

int main(void)
{
    int x = 4;
    int y = 3;
    int hasil;

    hasil = proses(tambah(x, y));

    printf("Hasil akhir: %d\n", hasil);

    return 0;
}

int tambah(int a, int b)
{
    return a + b;
}

int kali(int a, int b)
{
    return a * b;
}

int proses(int nilai)
{
    int hasil_sementara = kali(nilai, 2);
    return hasil_sementara + 1;
}