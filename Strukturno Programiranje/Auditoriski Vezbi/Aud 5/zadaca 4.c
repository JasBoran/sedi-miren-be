/*
Да се напише програма што на екран ќе ги испечати сите четири-цифрени броеви кај кои збирот на трите 
најмалку значајни цифри е еднаков со најзначајната цифра.
(4031 (4=0+3+1), 5131 (5=1+3+1))
*/

#include <stdio.h>

int main() {
    int CetiriCifrenBroj;

    for(CetiriCifrenBroj=1000;CetiriCifrenBroj<10000;CetiriCifrenBroj++)
    {
        int PrvaCifra = CetiriCifrenBroj/1000;
        int VtoraCifra = (CetiriCifrenBroj/100)%10;
        int TretaCifra = (CetiriCifrenBroj/10)%10;
        int CetvrtaCifra = CetiriCifrenBroj%10;

        if (PrvaCifra==(VtoraCifra + TretaCifra + CetvrtaCifra))
        {
            printf("%d (%d = %d + %d + %d)\n",CetiriCifrenBroj,PrvaCifra,VtoraCifra,TretaCifra,CetvrtaCifra);
        }
    }
    return 0;
}
