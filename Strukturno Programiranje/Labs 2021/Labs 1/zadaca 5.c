/*
Да се напише програма коjа за даден цел броj секунди коj се чита од стандарден влез, ќе ги отпечати на екран соодветните вредности во часови, минути и секунди.

For example:
Input: 54321
Output: 54321 sekundi se 15 casovi, 5 minuti i 21 sekundi
*/

#include <stdio.h>

int main()
{
    int vreme;
    float casovi=0.0, minuti=0.0, sekundi=0.0;
    scanf("%d", &vreme);

    casovi = vreme / 3600.00;
    minuti = (casovi - (int)casovi) * 60;
    sekundi = (minuti - (int)minuti) * 60;

    printf("%d sekundi se %d casovi, %d minuti i %.f sekundi", vreme, (int)casovi, (int)minuti, sekundi);
    return 0;
}
