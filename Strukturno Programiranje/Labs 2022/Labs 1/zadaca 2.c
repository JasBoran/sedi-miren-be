/*
Да се пресмета просечна висина(cm) на тројца студенти и истата да се испечати претставена во m и cm.

For example:
Input: 162 150 174
Output: 1 m 62 cm
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x = ((a+b+c)/3);
    int m;
    int cm;
    m=x/100;
    cm=x%100;
    printf("%d m %d cm",m,cm);
    return 0;
}
