/*
Да се напише програма за пресметување на аритметичката средина на броевите 3, 5 и 12.
*/

#include <stdio.h>

int main()
{
    float AritmetickaSredina;
    float a = 3.0, b = 5.0, c = 12.0;

    AritmetickaSredina = (a + b + c)/3.0;
    printf("Aritemtickata sredina na 3,5 i 12 e %.2f",AritmetickaSredina);
    return 0;
}
