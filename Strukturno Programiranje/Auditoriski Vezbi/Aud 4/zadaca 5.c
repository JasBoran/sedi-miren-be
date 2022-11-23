/*
Да се промени претходната програма, така што покрај оценките ќе се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:

последна цифра:       печати:
1 - 3                   -
4 - 7              prazno mesto
8 - 0                   +

Пример:
81 = 9-
94 = 10
68 = 7+
(За оценката 5 не треба да се додава + или –, а за оценката 10 не треба да се додава знакот +.)
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

    int PoslednaCifra = Poeni%10;
    if (Poeni>=51 && Poeni<=93)
    {
        if (PoslednaCifra==8) //Se buneshe compilerot radi nulata (napishav PoslednaCifra<=0)
        {
            printf("+");
        }
        if (PoslednaCifra==9)
        {
            printf("+");
        }
        if (PoslednaCifra==0)
        {
            printf("+");
        }

        if(PoslednaCifra>=1 && PoslednaCifra<=3)
        {
            printf("-");
        }
    }
    return 0;
}
