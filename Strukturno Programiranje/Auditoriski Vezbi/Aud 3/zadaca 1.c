/*
Да се напише програма која чита знак од тастатура и во зависнот од тоа дали е мала или голема буква печати 1 или 0, соодветно.
Користете логички и релациони оператори за тестирање на ASCII вредноста на знакот.

- Бонус: Направете проверка дали знакот е цифра.
*/

#include <stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    if (c >= 'a' && c <= 'z')
    {
        printf("1");
    }
    else if(c >= 'A' && c <= 'Z')
    {
        printf("0");
    }
    else if(c>=0 && c<= 0)
    {
        printf("Cifra e");
    }
    return 0;
}
