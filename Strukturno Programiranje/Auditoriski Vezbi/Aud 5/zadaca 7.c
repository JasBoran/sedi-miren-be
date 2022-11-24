/*
Да се напише програма што од непознат број на цели броеви што се внесуваат од тастатура ќе го определи бројот со максимална вредност. 
Притоа, броевите поголеми од 100 не се земаат предвид т.е. се игнорираат. Програмата завршува ако се внесе невалидна репрезентација на број.
*/

#include <stdio.h>
int main() {
    int Broj, max;

    if (scanf("%d", &max))  //da se vnesuva broevi se dodeka ne klineme neshto shto ne e broj od tastatura
    {
        while (scanf("%d", &Broj)) 
        {
            if(Broj>100)
                continue; //da gi skokne broevite pogolemi od 100
            if (max < Broj)
            {
                max = Broj;
            }
        }
        printf("Najgolemiot broj e: %d", max);
    }

    else
    {
        printf("Ne e vnesen broj.");
    }
    return 0;
}
