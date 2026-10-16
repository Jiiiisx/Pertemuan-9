#include <stdio.h>

int apakah_genap(int bilangan);

int main(void)
{
    int i;
    int bilangan;
    int jumlah_genap = 0;
    int jumlah_ganjil = 0;

    printf("Masukkan 10 bilangan bulat:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("Bilangan ke-%d: ", i);
        scanf("%d", &bilangan);

        if (apakah_genap(bilangan) == 1)
        {
            jumlah_genap++;
        }
        else
        {
            jumlah_ganjil++;
        }
    }

    printf("\nJumlah bilangan genap  : %d\n", jumlah_genap);
    printf("Jumlah bilangan ganjil : %d\n", jumlah_ganjil);

    return 0;
}

int apakah_genap(int bilangan)
{
    if (bilangan % 2 == 0)
    {
        return 1;
    }
    return 0;
}