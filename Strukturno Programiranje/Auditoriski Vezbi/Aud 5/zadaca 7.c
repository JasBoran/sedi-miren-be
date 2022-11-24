/*
Да се напише програма што од непознат број на цели броеви што се внесуваат од тастатура ќе го определи бројот со максимална вредност. 
Притоа, броевите поголеми од 100 не се земаат предвид т.е. се игнорираат. Програмата завршува ако се внесе невалидна репрезентација на број.
*/

#include <stdio.h>
int main() {
    int Broj, max;

    while (scanf("%d", &Broj)) //da raboti programata se dodeka ne klikneme neshto drugo osven broj
    {
        if(Broj>100)
            continue; //da gi skokne broevite pogolemi od 100
        if (max < Broj)
        {
            max = Broj;
        }
    }
    printf("Najgolemiot broj e: %d", max);

return 0;
}
