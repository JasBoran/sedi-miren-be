/*
Да се напише програма која ќе ги отпечати на екран остатоците при делењето на бројот 19 со 2, 3, 5 и 8.
*/

#include <stdio.h>

int main()
{
    printf("Ostatok pri delenje so 2 e: %d\n",19%2);
    printf("Ostatok pri delenje so 3 e: %d\n",19%3);
    printf("Ostatok pri delenje so 5 e: %d\n",19%5);
    printf("Ostatok pri delenje so 8 e: %d",19%8);
    return 0;
}

/*
Или може и вака:

#include <stdio.h>

int main()
{
    int x = 19;
    printf("Ostatok pri delenje so 2 e: %d\n",x%2);
    printf("Ostatok pri delenje so 3 e: %d\n",x%3);
    printf("Ostatok pri delenje so 5 e: %d\n",x%5);
    printf("Ostatok pri delenje so 8 e: %d",x%8);
    return 0;
}

*/
