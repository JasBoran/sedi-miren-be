/*
Да се напише програма која од СВ ќе прочита два цели броеви и ќе ја испечати на компјутерскиот екран нивната сума, разлика, 
производ и остатокот при делењето.
(ne se buni na CB ni ja neznam shto e ama ne e vazno)
*/

#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("Sumata e: %d\n",x + y);
    printf("Razlikata e: %d\n",x - y);
    printf("Proizvodot e: %d\n",x * y);
    printf("Ostatokot e: %d",x % y);
    return 0;
}
