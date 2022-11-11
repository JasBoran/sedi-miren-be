/*
Да се напише програма каде од тастатура се внесува еден седумцифрен број. Програмата печати DA доколку бројот е специјален, а NE во спротивно. 
Еден број е специјален доколку за него важи дека е делив со својата прва цифра и не е делив со збирот на последните две или доколку не е делив со 
својата втора цифра и не е делив со збирот на последните две. Да се внимава на делење со 0, т.е. да се испечати порака Nevaliden broj во таков случај.

For example:
Input: 1234567
Output: DA
*/

#include <stdio.h> //Neznam zasto ne raboti na kompajlerot

int main() {
    int SedumCifrenBroj;
    scanf("%d",&SedumCifrenBroj);//1234567
    int PrvaCifra = SedumCifrenBroj / 1000000;
    int VtoraCifra = (SedumCifrenBroj / 100000) % 10;
    int PretposlednaCifra = (SedumCifrenBroj / 10) % 10;
    int PoslednaCifra = SedumCifrenBroj % 10;
    int ZbirNaPretposlednaIPoslednaCifra = PretposlednaCifra + PoslednaCifra;

    if (PrvaCifra == 0 || VtoraCifra == 0 || ZbirNaPretposlednaIPoslednaCifra == 0 || SedumCifrenBroj == 0)
    {
        printf("Nevaliden broj");
    }

    if (SedumCifrenBroj%PrvaCifra==0 && PrvaCifra%ZbirNaPretposlednaIPoslednaCifra!=0)
    {
        printf("DA");
    }
    else if (SedumCifrenBroj%VtoraCifra==0 && PrvaCifra%ZbirNaPretposlednaIPoslednaCifra!=0)
    {
        printf("DA");
    }
    else
    {
        printf("NE");
    }
    return 0;
}
