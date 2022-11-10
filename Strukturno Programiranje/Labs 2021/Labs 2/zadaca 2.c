/*
Напишете код со којшто ќе вчитате три вредности x,y,z, и потоа еден по еден ќе ги извршите следниве изрази:

y = ++x && (z+5 || --y)
z = z-- || (x>y) && (x>z)

Испечатете ги вредностите на x,y,z по секое извршување на горните изрази.
Разгледајте ги резултатите што ги добивате и објаснете му/и на демонстраторот/демонстраторката, зошто резултатите се такви какви што се.

For example:
Input: -1 -1 -1
Output: 0 0 -1
        0 0 1
*/

#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    y = ++x && (z+5 || --y);
    printf("%d %d %d\n",x,y,z);
    z = z-- || (x>y) && (x>z);
    printf("%d %d %d",x,y,z);
    return 0;
}
