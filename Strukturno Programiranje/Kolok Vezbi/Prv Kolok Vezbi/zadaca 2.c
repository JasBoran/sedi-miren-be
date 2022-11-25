/*
Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. Обратен број е бројот составен од истите цифри, 
но во обратен редослед (на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9). Да се најде и 
отпечати најголемиот природен број помал од n кој што е „интересен“. Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

For example:
Input: 5
Output: Brojot ne e validen
*/

#include <stdio.h>
int main ()
{
    int n,temp;
    int InteresenBroj;
    int cifra;
    int brojac=0,broj=0;

    scanf("%d",&n);

    if(n<10)
    {
        printf("Brojot ne e validen");
        return 0;
    }

    for(InteresenBroj=(n-1);InteresenBroj>0;InteresenBroj--)
    {
        temp=InteresenBroj;

        while(temp)
        {
            cifra=temp%10;
            brojac++;
            broj=broj*10+cifra;
            temp = temp /10;
        }

        if(broj%brojac==0)
        {
            printf("%d",InteresenBroj);
            return 0;
        }

        broj=0;
        brojac=0;
    }

}
//copy od drug
