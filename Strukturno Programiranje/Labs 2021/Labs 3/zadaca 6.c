/*
Да се напише програма која за петцифрен број прочитан од стандарден влез ќе проверува дали е палиндром. Ако бројот е палиндром, на екран треба да 
се испечати пораката "Palindrom", а во спротивно - "Ne e palindrom". Доколку внесениот број не е петцифрен треба да се испечати пораката "Nevaliden vlez".

For example:
Input: 84848
Output: Palindrom
*/

#include <stdio.h>

int main() {
    int PetcifrenBroj;
    int Palindrom;
    scanf("%d",&PetcifrenBroj);

    int PoslednaCifra = PetcifrenBroj % 10;
    if (PetcifrenBroj > 9999 && PetcifrenBroj < 100000)
    {
        int PrvaCifra = PetcifrenBroj / 10000;//12345
        int VtoraCifra = (PetcifrenBroj / 1000) % 10;
        int CetvrtaCifra = (PetcifrenBroj / 10) % 10;
        int PettaCifra = PetcifrenBroj % 10;
        if(PrvaCifra == PettaCifra && VtoraCifra == CetvrtaCifra)\
            {
            printf("Palindrom");
            }
        else
        {
            printf("Ne e palindrom");
        }
    }
    else
    {
        printf("Nevaliden vlez");
    }
    return 0;

}
