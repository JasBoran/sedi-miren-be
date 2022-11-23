/*
Да се напише програма што за внесен број на поени од испит ќе генерира соодветна оценка според следната табела:

Поени:        Оценки:
0-50            5
51-60           6
61-70           7
71-80           8
81-90           9
91-100          10
*/

#include <stdio.h>

int main()
{
    int Poeni;
    printf("Vnesi poeni: ");
    scanf("%d",&Poeni);

    if (Poeni>=0 && Poeni<=50)
    {
        printf("Ocenka 5");
    }

    else if (Poeni>=51 && Poeni<=60)
    {
        printf("Ocenka 6");
    }

    else if (Poeni>=61 && Poeni<=70)
    {
        printf("Ocenka 7");
    }

    else if (Poeni>=71 && Poeni<=80)
    {
        printf("Ocenka 8");
    }

    else if (Poeni>=81 && Poeni<=90)
    {
        printf("Ocenka 9");
    }

    else if (Poeni>=91 && Poeni<=100)
    {
        printf("Ocenka 10");
    }

    else
    {
        printf("Nevalidna vrednost na poeni");
    }
    return 0;
}
