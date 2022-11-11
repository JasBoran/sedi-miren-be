/*
Да се напише програма во која од стандарден влез се чита мобилен број во следниот формат XXYYYZZZ (пр. 71298486). Програмата треба да го испечати во формат XXX/YYY-ZZZ 
(пр. 071/298-486). Дополнително, треба да го испечати и името на иницијалниот оператор:
  070/071/072 - T-Mobile,
  075/076/077/078 - А1.
  079 - Lycamobile
  
For Example:
Input: 070 120 004
Output: 070/120-004 T-mobile
*/

#include <stdio.h>

int main() {
    int telefon;
    scanf("%d",&telefon);
    int PrviCifri = telefon/1000000;

    if(PrviCifri==70 || PrviCifri==71 || PrviCifri==72)
    {
        int Sredni = (telefon/1000) % 1000;
        int KrajniCifri = telefon%1000;
        printf("0%d/%03d-%03d T-mobile",PrviCifri,Sredni,KrajniCifri);
    }

    if(PrviCifri==75 || PrviCifri==76 || PrviCifri==77 || PrviCifri==78)
    {
        int Sredni = (telefon/1000) % 1000;
        int KrajniCifri = telefon%1000;
        printf("0%d/%03d-%03d A1",PrviCifri,Sredni,KrajniCifri);
    }

    if(PrviCifri==79)
    {
        int Sredni = (telefon/1000) % 1000;
        int KrajniCifri = telefon%1000;
        printf("0%d/%03d-%03d LycaMobile",PrviCifri,Sredni,KrajniCifri);
    }
    return 0;
}
