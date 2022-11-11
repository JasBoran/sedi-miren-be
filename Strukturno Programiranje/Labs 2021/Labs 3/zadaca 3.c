/*
Од тастатура се внесува четирицифрен број n што во себе содржи барем 2 цифри со вредност 5.
КОЛЕГА на тој број е бројот кој на позициите на кои има петки во првиот број ќе има шестка во бројот КОЛЕГА. (Пр. колега на 5551 е 6661).
На екран да се испечати за колку проценти едниот број е поголем/помал од другиот број. Да се има во предвид дека некогаш може да биде поголем бројот n, 
а некогаш неговиот колега.

Доколку бројот n не содржи најмалку 2 цифри петки, да се испечати порака за грешка како во тест примерите.

For example:
Input: 5500
Output: 20.0000%
*/

#include <stdio.h>

int main()
{
    int n = 0;
    int kolega = 0;

    scanf("%d", &n);

    int cifra1 = 0;
    int cifra2 = 0;
    int cifra3 = 0;
    int cifra4 = 0;

    cifra1 = n % 10;
    cifra2 = n % 100 / 10;
    cifra3 = n % 1000 / 100;
    cifra4 = n / 1000;

    int brojnapetki = 0;
    if(cifra1 == 5)
        brojnapetki++;
    if(cifra2 == 5)
        brojnapetki++;
    if(cifra3 == 5)
        brojnapetki++;
    if(cifra4 == 5)
        brojnapetki++;

    if(brojnapetki < 2)
    {
        printf("Error");
        return 0;
    }

    if(cifra1 == 5)
        kolega += 6;
    else
        kolega += cifra1;

    if(cifra2 == 5)
        kolega += 6 * 10;
    else
        kolega += cifra2 * 10;

    if (cifra3 == 5)
        kolega += 6 * 100;
    else
        kolega += cifra3 * 100;

    if (cifra4 == 5)
        kolega += 6 * 1000;
    else
        kolega += cifra4 * 1000;

    float razlika = 0;

    if(kolega > n)
        razlika = kolega - n;
    else
        razlika = n - kolega;
    
    printf("%.4f%%", razlika / n * 100.0f);

    return 0;
}
