/*
Да се креира програма која што за вчитан датум од стандарден влез (во формат DD MM GGGG) ќе испечати на стандарден излез порака DA или NE
во зависност од тоа дали внесениот датум е правилен или не.

При одредување на валидноста на датумот во предвид да се земат сите фактори:
  дали месецот е број помеѓу 1 и 12
  дали денот одговара со бројот на денови во тој месец
  доколку е 29.02. да се внимава дали станува збор за престапна година
    престапна година е секоја година која што е делива со 400 или пак е делива со 4, но не и со 100.
    
For Example:
Input: 29 02 2140
Output: DA!
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,g;
    scanf("%d %d %d",&d,&m,&g);

    if((m==1 || m== 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)&& (d>= 0 &&d<=31) )
    {
            printf("DA");
    }

    else if((m==4 || m== 6 || m == 9 || m == 11) && (d>= 0 &&d<=30))
    {
            printf("DA");
    }

    else if (m == 2)
    {
        if(g%400==0 || (g%4==0 && g%100!=0) && (d<=29))
        {
            printf("DA");
        }
        else
        {
            printf("NE");
        }
    }
    else
    {
        printf("NE");
    }

    return 0;
}
