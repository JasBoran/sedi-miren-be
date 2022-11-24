/*
Да се напише програма каде од тастатура се внесува еден седумцифрен број. Програмата печати DA доколку бројот е специјален, а NE во спротивно. 
Еден број е специјален доколку за него важи дека е делив со својата прва цифра и не е делив со збирот на последните две или доколку не е делив со 
својата втора цифра и не е делив со збирот на последните две. Да се внимава на делење со 0, т.е. да се испечати порака Nevaliden broj во таков случај.

For example:
Input: 1234567
Output: DA
*/

#include <stdio.h>

int main() {
    int SedumCifrenBroj;
    scanf("%d",&SedumCifrenBroj);//1234567
    int PrvaCifra = SedumCifrenBroj / 1000000;
    int VtoraCifra = (SedumCifrenBroj / 100000) % 10;
    int TretaCifra = (SedumCifrenBroj / 10000) % 10;
    int CetvrtaCifra = (SedumCifrenBroj / 1000) % 10;
    int PettaCifra = (SedumCifrenBroj/ 100) % 10;
    int ShestaCifra = (SedumCifrenBroj / 10) % 10;
    int SedmaCifra = SedumCifrenBroj % 10;
    int ZbirNaPretposlednaIPoslednaCifra = ShestaCifra + SedmaCifra;

    if (SedmaCifra == 0 && ShestaCifra == 0 && PettaCifra == 0 && CetvrtaCifra == 0 && TretaCifra == 0 && VtoraCifra == 0 && PrvaCifra == 0 )
    {
        printf("Nevaliden broj");       //Samo ovaa komanda ne raboti dobro neznam zasto, napisi primer: 1235000
    }

    if (SedumCifrenBroj%PrvaCifra==0 && SedumCifrenBroj%ZbirNaPretposlednaIPoslednaCifra!=0 && SedumCifrenBroj%VtoraCifra!=0)
    {
        printf("DA");
    }

    else
    {
        printf("NE");
    }
    return 0;
}
