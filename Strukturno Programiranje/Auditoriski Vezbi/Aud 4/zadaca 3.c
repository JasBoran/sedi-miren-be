/*
Од тастатура се внесуваат координати на една точка од рамнина. Да се напише програма со која ќе се испечати на кој квадрант припаѓа внесената точка.
(Овде има слика, иди на ауд провери)
*/

#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    if (x>0 && y>0)
    {
        printf("Koordinatite pripagjaat vo 1 kvadrant");
    }

    else if (x>0 && y<0)
    {
        printf("Koordinatite pripagjaat vo 2 kvadrant");
    }

    else if (x<0 && y<0)
    {
        printf("Koordinatite pripagjaat vo 3 kvadrant");
    }

    else if (x<0 && y>0)
    {
        printf("Koordinatite pripagjaat vo 4 kvadrant");
    }
    return 0;
}
