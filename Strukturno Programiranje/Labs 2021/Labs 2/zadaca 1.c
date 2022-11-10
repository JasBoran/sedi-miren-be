/*
Да се напише програма каде од тастатура се внесува одреден износ на пари кој корисник го има на својата трансакциска сметка. Потоа, во нов ред се внесува сумата 
на еден производ кој го купил, на кој дополнително треба да плати и ДДВ(18% од таа сума). Програмата печати 1 доколку после плаќањето на ДДВ корисникот има барем 
1 денар на својата сметка, а 0 во спротивно.

For Example:
input: 2361
       2000
output: 1
*/

#include <stdio.h>

int main() {
    int PariNaTranzakciska;
    scanf("%d",&PariNaTranzakciska);
    int SumaNaProizvodSoDDV;
    scanf("%d",&SumaNaProizvodSoDDV);
    if (PariNaTranzakciska - (SumaNaProizvodSoDDV*1.18) > 0 )
        printf("1");
    else
        printf("0");
    return 0;
}
