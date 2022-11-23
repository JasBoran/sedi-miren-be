/*
Да се напише програма за пресметување на сумата на сите парни двоцифрени броеви. Добиената сума се печати на екран.
*/

#include <stdio.h>

int main() {
    int i;
    i = 10;
    int sum;
    while(i<=98)
    {
        sum = sum + i;
        i+=2;
    }
    printf("%d",sum);
    return 0;
}
