/*
За даден број, проверете дали е 7-цифрен и ако е, испечате ги во посебен ред секој од неговите цифри почнувајќи од првата, 
а потоа повторно во посебен ред нивната сума и производ.

Ако бројот не е 7 цифрен само испечатете "Vneseniot broj ne e 7 cifren!".

For example:
Input: 1000000
Output: 1
        0
        0
        0
        0
        0
        0
        1
        0
*/

#include <stdio.h>

int main() {
    int sedumcifrenbroj;
    scanf("%d",&sedumcifrenbroj);
    int prvacifra = sedumcifrenbroj / 1000000;
    int vtoracifra = (sedumcifrenbroj/100000)%10;
    int tretacifra = (sedumcifrenbroj/10000)%10;
    int cetvrtacifra = (sedumcifrenbroj/1000)%10;
    int pettacifra = (sedumcifrenbroj/100)%10;
    int shestacifra = (sedumcifrenbroj/10)%10;
    int sedmacifra = sedumcifrenbroj%10;
    int sum = prvacifra + vtoracifra + tretacifra + cetvrtacifra + pettacifra + shestacifra + sedmacifra;
    int proizvod = prvacifra * vtoracifra * tretacifra * cetvrtacifra * pettacifra * shestacifra * sedmacifra;
    if(sedumcifrenbroj>999999 && sedumcifrenbroj<10000000)
    {
        printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n",prvacifra,vtoracifra,tretacifra,cetvrtacifra,pettacifra,shestacifra,sedmacifra);
        printf("%d\n%d\n",sum,proizvod);
    }
    else
        printf("Vneseniot broj ne e 7 cifren!");

    return 0;
}
