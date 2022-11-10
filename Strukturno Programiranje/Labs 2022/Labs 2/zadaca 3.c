/*
Од стандарден влез се вчитуваат следните податоци за еден студент на ФИНКИ:
- индекс (шестцифрен цел број)
- шест оценки од последниот семестар кој го слушал
Да се напише програма која што на стандарден излез ќе ги испечати следните информации за студентот: (погледнете во тест примерите за форматот на печатење)
- просек на студентот
  - просекот да се испечати со точност од 3 децимали
- година на студии
  - студентите чијшто индекс почнува на 17 се трета година, на 16 се четврта година, на 15 се петта година итн.
- дали е награден (1 = награден, 0 = не е награден)
  - Еден студент се наградува доколку има просек еднаков или поголем од 9.5
  
For example:
Input: 151021 9 9 10 10 10 8 
Output: Prosek: 9.333
        Student: 151021
        5 godina
        Nagraden: 0
*/

#include <stdio.h>

int main() {
    int Index;
    float Ocenka1, Ocenka2, Ocenka3, Ocenka4, Ocenka5, Ocenka6;
    scanf("%d ",&Index);
    scanf("%f %f %f %f %f %f",&Ocenka1,&Ocenka2,&Ocenka3,&Ocenka4,&Ocenka5,&Ocenka6);

    float Prosek;
    Prosek = (Ocenka1 + Ocenka2 + Ocenka3 + Ocenka4 + Ocenka5 + Ocenka6)/6.0;
    printf("Prosek: %.3f\n",Prosek);
    int PrviDveBrojkiOdIndex = Index/10000;

    if (PrviDveBrojkiOdIndex == 19)
    {
        printf("Student: %d\n",Index);
        printf("1 godina\n");
    }
    
    if (PrviDveBrojkiOdIndex == 18)
    {
        printf("Student: %d\n",Index);
        printf("2 godina\n");
    }
    
    if (PrviDveBrojkiOdIndex == 17)
    {
        printf("Student: %d\n",Index);
        printf("3 godina\n");
    }
    
    else if (PrviDveBrojkiOdIndex == 16)
    {
        printf("Student: %d\n",Index);
        printf("4 godina\n");
    }
    
    else if (PrviDveBrojkiOdIndex == 15)
    {
        printf("Student: %d\n",Index);
        printf("5 godina\n");
    }
    
    else if (PrviDveBrojkiOdIndex == 14)
    {
        printf("Student: %d\n",Index);
        printf("6 godina\n");
    }

    else if (PrviDveBrojkiOdIndex == 13)
    {
        printf("Stundent: %d\n",Index);
        printf("7 godina\n");
    }

    else if (PrviDveBrojkiOdIndex == 12)
    {
        printf("Stundent: %d\n",Index);
        printf("8 godina\n");
    }

    else if (PrviDveBrojkiOdIndex == 11)
    {
        printf("Stundent: %d\n",Index);
        printf("9 godina\n");
    }

    else if (PrviDveBrojkiOdIndex == 10)
    {
        printf("Stundent: %d\n",Index);
        printf("10 godina\n");
    }

    if (Prosek >= 9.5)
    {
        printf("Nagraden: 1");
    }
    else
    {
        printf("Nagraden: 0");
    }
    return 0;
}
