#include <stdio.h>

int apakah_prima(int bilangan);

int main(void)
{
    int batas;
    int i;

    printf("Masukkan batas bilangan: ");
    scanf("%d", &batas);

    if (batas < 2)
    {
        printf("Tidak ada bilangan prima sampai batas tersebut.\n");
        return 0;
    }

    printf("Bilangan prima dari 1 sampai %d:\n", batas);
    for (i = 1; i <= batas; i++)
    {
        if (apakah_prima(i) == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

int apakah_prima(int bilangan)
{
    int pembagi;

    if (bilangan < 2)
    {
        return 0;
    }

    for (pembagi = 2; pembagi * pembagi <= bilangan; pembagi++)
    {
        if (bilangan % pembagi == 0)
        {
            return 0;
        }
    }

    return 1;
}