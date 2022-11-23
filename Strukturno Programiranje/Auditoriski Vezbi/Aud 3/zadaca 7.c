/*
Да се напише програма каде од тастатура ќе се внесе трицифрен цел број. Програмата ќе ја испечати најзначајната и најмалку значајната цифра од бројот

Пример: Ако се внесе следниот бројот 795, програмата ќе испечати:
Najznacajna cifra e 7, a najmalku znacajna e 5.

(Искористете целобројно делење и остаток од делење.)
*/

#include <stdio.h>

int main()
{
    int TriCifrenBroj;
    printf("Vnesi Tri Cifren Broj: ");
    scanf("%d",&TriCifrenBroj);

    int PrvaCifra = TriCifrenBroj/100;
    int PoslednaCifra = TriCifrenBroj%10;

    printf("Najznacajna cifra: %d\n",PrvaCifra);
    printf("Najmalku znacajna cifra: %d",PoslednaCifra);
    return 0;
}
