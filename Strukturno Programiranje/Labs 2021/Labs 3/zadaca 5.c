/*
Да се напише програма која од тастатура чита три парови на координати (x1, y1), (x2, y2), (x3, y3), секој во нов ред, како во пример внесот. 
Се смета дека координатите се за точките A, B, C соодветно. Програмата го печати името на најдолгата отсечка, како во примерот. 
Се смета дека секогаш има една таква отсечка.

For example:
Input: -5 2
       -8 -9
       0 0
Output: BC
*/

#include <stdio.h> //NOTE NE MI E TOCNA ZADACA, KJE NAPRAAM UPDATE 

int main() {
    int x1,y1; //A
    int x2,y2; //B
    int x3,y3; //C
    scanf("%d %d",&x1, &y1); //AB, AC, BC
    scanf("%d %d",&x2, &y2);
    scanf("%d %d",&x3, &y3);
    int A = x1 + y1;
    int B = x2 + y2;
    int C = x3 + y3;
    int AB = A + B;
    int AC = A + C;
    int BC = B + C;

    if (AC > AB && AC > BC)
    {
        printf("AC");
    }
    else if (AB > AC && AB > BC)
    {
        printf("AB");
    }
    else if (BC > AC && BC > AB)
    {
        printf("BC");
    }
    return 0;
}
