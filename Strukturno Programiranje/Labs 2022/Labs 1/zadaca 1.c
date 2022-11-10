/*
Да се прочитаат два цели броеви од тастатура и на екран да се испечатат нивните сума и производ.

For example:
Input: 5 6
Output: 11
        30
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d\n%d",x+y,x*y);
    return 0;
}
