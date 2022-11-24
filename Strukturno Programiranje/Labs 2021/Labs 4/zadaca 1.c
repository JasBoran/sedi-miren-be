/*
Од тастатура се чита еден непарен цел број n кој е поголем или еднаков на 5. Со помош на знакот * да се исцрта математичкиот симбол за бесконечност, 
кој би се добил како во примерот подолу, за n=5:

*   *
** **
* * *
** **
*   *

For example:
Input: 15	
Output:   *             *
          **           **
          * *         * *
          *  *       *  *
          *   *     *   *
          *    *   *    *
          *     * *     *
          *      *      *
          *     * *     *
          *    *   *    *
          *   *     *   *
          *  *       *  *
          * *         * *
          **           **
          *             *
*/

#include <stdio.h> 

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j || j == (n-i-1))
            {
                printf("*");
            }

            else if(j==0 || j==n-1)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

//copy od drug poso stvarno neznaev
