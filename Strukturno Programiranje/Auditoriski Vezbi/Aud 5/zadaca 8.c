/*
Да се напише програма што од непознат број на цели броеви што се внесуваат од тастатура ќе ги определи двата броја со најголеми вредности.
Програмата завршува ако се внесе невалидна репрезентација на број.

Пример:
Ако се внесат броевите 2 4 7 4 2 1 8 6 9 7 10 3 програмата ќе отпечати 10 и 9.
*/

#include <stdio.h>
int main() {
    int Broj, max1,max2;

        while (scanf("%d", &Broj)) //da raboti programata se dodeka ne klikneme neshto drugo osven broj
        {
            if (max2 < Broj && max2 < max1)
            {
                max2 = max1;
            }

            if (max1 < Broj)
            {
                max1 = Broj;
            }
        }
        printf("Najgolemiot broj e: %d\n", max1);
        printf("Vtoriot Najgolem broj e: %d",max2);

    return 0;
}
