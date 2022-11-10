/*
Да се напише програма каде од тастатура ќе се внесе еден број кој има пет цифри, но не мора да е петцифрен, како на пример 04569 или 00256.
Програмата ги печати сумите на паровите цифри од надвор кон внатре, за на крај да ја испечати средишната цифра.

For Example:
Input: 90008
Output: 17 0 0
*/

#include <stdio.h>

int main() {
    int PetCifrenBroj;
    scanf("%d",&PetCifrenBroj); //12345
    int Prva = PetCifrenBroj / 10000;
    int Petta = PetCifrenBroj % 10;
    int SumNaPrvaIPetta = Prva + Petta;
    int Vtora = (PetCifrenBroj / 1000)%10;
    int Cetvrta = (PetCifrenBroj % 100)/10;
    int SumNaVtoraICetrta = Vtora + Cetvrta;
    int Sredina = (PetCifrenBroj%1000)/100;
    printf("%d %d %d",SumNaPrvaIPetta,SumNaVtoraICetrta,Sredina);
    return 0;
}
