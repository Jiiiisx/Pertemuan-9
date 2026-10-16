#include <stdio.h>

int jumlah_digit(int n);

int main(void)
{
    int angka;

    printf("Masukkan bilangan: ");
    scanf("%d", &angka);

    /* Validasi bilangan negatif */
    if (angka < 0)
    {
        printf("Bilangan tidak boleh negatif.\n");
        return 1;
    }

    printf(
        "Jumlah digit: %d\n",
        jumlah_digit(angka)
    );

    return 0;
}

int jumlah_digit(int n)
{
    /* Base case: ketika tersisa satu digit (0-9) */
    if (n < 10)
    {
        return n;
    }

    /* Recursive case */
    return (n % 10) + jumlah_digit(n / 10);
}