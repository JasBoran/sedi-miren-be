/*
Од стандарден влез се вчитува број N, а потоа и N цели броеви. 
Да се испечати на екран најголемата разлика помеѓу два последователно внесени броја.

Да се реши без користење на низи!

Објаснување на примерот:
N=5, па се внесуваат 5 броја: 1,3,0,5,2. Разликите се соодветно:
3-1 = 2
0-3 = -3
5-0 = 5
2-5 = -3

Најголема разлика е 5.

For example:
Input: 5
       1
       3
       0
       5
       2
Output:
*/

#include <stdio.h>
int main ()
{
    int N,temp;
    scanf("%d %d",&N,&temp);
    int prv = 1;
    int Razlika;

    for (int i=0;i<N - 1;i++)
    {
        int Nbroevi;
        scanf("%d",&Nbroevi);
        
        if(Nbroevi - temp > Razlika || prv)
        {
            Razlika = Nbroevi - temp;
            prv = 0;
        }

        temp = Nbroevi;

    }
    printf("%d", Razlika);

    return 0;
}
