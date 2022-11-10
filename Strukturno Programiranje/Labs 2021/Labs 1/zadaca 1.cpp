/*
Да се напише програма која ќе ги изведува основните математички операции (+, -, *, /, %) врз два броја кои се читаат од стандарден влез.

For example:
Input: 24 5
Output: a + b = 29
        a - b = 19
        a * b = 120
        a / b = 4
        a % b = 4
*/

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Zbiirot na dvata broja iznesuva: %d\n",a+b);
    printf("Razlikata na dvata broja iznesuva: %d\n",a-b);
    printf("Proizvodot na dvata broja iznesuva: %d\n",a*b);
    printf("Kolicnikot na dvata broja iznesuva: %d\n",a/b);
    printf("Ostatokot na dvata broja iznesuva: %d\n",a%b);
    return 0;
}
