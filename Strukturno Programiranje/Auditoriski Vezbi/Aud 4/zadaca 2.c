/*
Да се напише програма што проверува дали дадена година што се вчитува од тастатура е престапна или не и на екран печати соодветна порака.

Пример престапни години:
1976, 2000, 2004, 2008, 2012…
(Годината е престапна ако е делива со 4 но не е делива со 100 или е делива со 400.)
*/

#include <stdio.h>

int main()
{
    int Godina;
    printf("Vnesi godina: ");
    scanf("%d",&Godina);
    if (( Godina%4==0 && Godina%100==1) || Godina%400==0)
    {
        printf("Godinata %d e prestapna",Godina);
    }
    else
    {
        printf("Godinata ne e prestapna");
    }
    return 0;
}
