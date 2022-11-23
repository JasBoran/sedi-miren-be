/*
Да се напише програма каде од тастатура ќе се внесе цена на производ, а потоа ќе ја испечати неговата цена со пресметан ддв.
(ДДВ е 18% од почетната цена)
*/

#include <stdio.h>

int main()
{
    float Cena;
    printf("Vnesi cena: ");
    scanf("%f",&Cena);
    float VkupnaCena = Cena * 1.18;
    printf("Vkupna cena: %.2f",VkupnaCena);
    return 0;
}
