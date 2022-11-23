/*
Да се напише програма каде од тастатура ќе се внесе цена на производ, број на рати на кои се исплаќа и камата 
(каматата е број изразен во проценти од 0 до 100). Програмата треба да го испечати износот на ратата и вкупната 
сума што ќе се исплати за производот

(Пресметајте ја целата сума, па потоа ратата.)
*/

#include <stdio.h>

int main()
{
    float CenaNaProizvod,BrojNaRati,Kamata;
    float Vkupno;

    printf("Cena na proizvod: ");
    scanf("%f",&CenaNaProizvod);

    printf("Broj na rati: ");
    scanf("%f",&BrojNaRati);

    printf("Kamata: ");
    scanf("%f",&Kamata);

    Vkupno = CenaNaProizvod * (1 + Kamata / 100);
    float Rata = Vkupno / BrojNaRati;

    printf("Vkupna suma: %.3f\n",Vkupno);
    printf("Edna rata iznesuva: %.3f",Rata);
    return 0;
}
