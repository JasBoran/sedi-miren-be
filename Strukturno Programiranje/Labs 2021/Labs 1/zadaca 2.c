/*
Да се напише програма која за дадена сума на пари, ќе испечати со колку најмалку банкноти и монети може да се исплати. На влез се чита еден цел број. На излез се печатат 
9 редови, по колку банкноти или монети од секој апоен ни се потребни за да ја исплатиме сумата. Пример 1583 денари, најдобро е да се исплати како:

0*5000
1*1000
1*500
0*100
1*50
3*10
0*5
1*2
1*1

For Example:
Input: 54321
Output: 10*5000
        4*1000
        0*500
        3*100
        0*50
        2*10
        0*5
        0*2
        1*1
*/

#include <stdio.h>

int main() {
    int suma;
    int Banknota5000,Banknota1000,Banknota500,Banknota100,Banknota50,Banknota10,Moneta5,Moneta2,Moneta1;
    printf("Suma: ");
    scanf("%d",&suma);
    Banknota5000 = suma/5000;
    suma = suma%5000;
    Banknota1000 = suma/1000;
    suma = suma%1000;
    Banknota500 = suma/500;
    suma = suma%500;
    Banknota100 = suma/100;
    suma = suma%100;
    Banknota50 = suma/50;
    suma = suma%50;
    Banknota10 = suma/10;
    suma = suma%10;
    Moneta5 = suma/5;
    suma = suma%5;
    Moneta2 = suma/2;
    suma = suma%2;
    Moneta1 = suma/1;
    suma = suma%1;

    printf("%d*5000\n",Banknota5000);
    printf("%d*1000\n",Banknota1000);
    printf("%d*500\n",Banknota500);
    printf("%d*100\n",Banknota100);
    printf("%d*50\n",Banknota50);
    printf("%d*10\n",Banknota10);
    printf("%d*5\n",Moneta5);
    printf("%d*2\n",Moneta2);
    printf("%d*1\n",Moneta1);
    return 0;
}
