#include <stdio.h>

int jumlah_digit(int n);

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    printf("========================================\n");
    printf("         JUMLAH DIGIT REKURSIF          \n");
    printf("========================================\n");
    printf("Bilangan     : %d\n", n);
    printf("----------------------------------------\n");
    printf("Jumlah digit : %d\n", jumlah_digit(n));
    printf("========================================\n");

    return 0;
}

int jumlah_digit(int n)
{
    if (n < 10)
    {
        return n;
    }

    return (n % 10) + jumlah_digit(n / 10);
}