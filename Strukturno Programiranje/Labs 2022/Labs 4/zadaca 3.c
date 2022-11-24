/*
Од тастатура се внесуваат цели броеви се додека не се внесе нешто што не е цел број.
Да се испечати на екран сумата на броевите во кои цифрите се подредени во опаѓачки редослед. Доколку нема такви броеви, да се испечати порака NEMA.

Објаснување на примерот:
Во првиот пример, нема ниту еден број во кој цифрите се подредени во опаѓачки редослед, па се печати NEMA.
Во вториот пример, во 4321, 21 и 81, цифрите се подредени во опаѓачки редослед, па се печати нивната сума 4423.

For example 1:
Input: 123
       124
       127
       .
Output: NEMA

For Example 2:
Input: 123
       4321
       21
       81
       15
       .
Output: 4423
*/

#include <stdio.h>

int main()
{
    int N;
    int suma = 0;
    
    while(scanf("%d", &N))
    {
        int b = 1;
        int rezultat = N; 
        int PoslednaCifra = N % 10; 
        rezultat /= 10;
        
        while(rezultat > 0)
        {
            if(!(rezultat % 10 > PoslednaCifra))
            {
                b = 0;
                break;
            }
            PoslednaCifra = rezultat % 10;
            rezultat /= 10;
        }

        if(b == 1)
        {
            suma += N;
        }

    }
    
    if(suma == 0)
    {
        printf("NEMA");
    }
    else 
    {
        printf("%d", suma);
    }
    
    return 0;
}
