/*
Да се напише програма со која ќе се отпечати максимумот од два броја чии вредности се читаат од тастатура.
*/

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("Maximumot e: %d",a);
    }
    else if (a<b)
    {
        printf("Maximumot e: %d",b);
    }
    return 0;
}
