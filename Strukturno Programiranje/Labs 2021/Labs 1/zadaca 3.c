/*
Да се напише програма која вчитува од стандарден влез два децимални броја (маса во кг и висина во цм) и пресметува и печати на стандарден излез индекс на
телесна маса по формулата:
$BMI = \frac{masa}{visina * visina}$

Висината претходно треба да се претвори од сантиметри во метри.

For Example:
Input: 45 150
Output: 20.00
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float masa, visina;
    scanf("%f", &masa);
    scanf("%f", &visina); visina/=100;

    printf("%.2f", masa/(visina*visina));

    return 0;
}
