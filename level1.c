#include <stdio.h>

int hitung_kuadrat(int bilangan);
int hitung_kubik(int bilangan);

int main(void)
{
    int bilangan;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    printf("Nilai awal : %d\n", bilangan);
    printf("Kuadrat    : %d\n", hitung_kuadrat(bilangan));
    printf("Kubik      : %d\n", hitung_kubik(bilangan));

    return 0;
}

int hitung_kuadrat(int bilangan)
{
    return bilangan * bilangan;
}

int hitung_kubik(int bilangan)
{
    return bilangan * bilangan * bilangan;
}