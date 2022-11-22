/*
Да се напише програма која што за вчитан датум како влезна променлива ( DD MM GGGG) ќе испечати на  излез порака 1 или 0 во зависност 
од тоа дали внесениот датум е правилен или не.
Напомена: За проверка на валидноста на датумот разгледајте ги следниве потточки:

 ->за датумот 29.02. да се внимава дали станува збор за престапна година 
 (престапна година е секоја година која што е делива со 400 или пак е делива со 4, но не и со 100)
 ->дали месецот е број помеѓу 1 и 12
 ->дали денот одговара со бројот на денови во тој месец
 
 For Example 1:
 Input: 1 6 1992
 Output: 1
 
 For Example 2:
 Input: 30 2 2004
 Output: 0
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m,g;
    scanf("%d %d %d",&d,&m,&g);

    if((m==1 || m== 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)&& (d>= 0 &&d<=31) )
    {
            printf("1");
    }

    else if((m==4 || m== 6 || m == 9 || m == 11) && (d>= 0 &&d<=30))
    {
            printf("1");
    }

    else if (m == 2)
    {
        if(g%400==0 || (g%4==0 && g%100!=0) && (d<=29))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    else
    {
        printf("0");
    }

    return 0;
}