/*
Да се напише програма што ќе ги испечати сите броеви од зададен опсег кои се читаат исто и одлево надесно и оддесно налево.

Пример Броеви:
12321  
5061605
*/

#include <stdio.h>

int main() {
    int Pocetok,Kraj;
    printf("Vnesi od kade do kade da ide brojot: ");
    scanf("%d %d",&Pocetok,&Kraj);

    for(int i=Pocetok;i<=Kraj;i++)
    {
        int temp = i; //ova e Pocetok
        int EdnaStrana=0;

        while(temp!=0) //se dodeka temp ne e 0 da ide ciklusot
        {                                               // primer: temp = 123
            int PoslednaCifra = temp%10;                // ovaa linija kod samo zima 3 od 123
            EdnaStrana = EdnaStrana*10 + PoslednaCifra; // bidejki imame "EdnaStrana = 0" tuka samo ja dodava cifrata 3 (ova e kod za prevrtuvanje broj)
            temp=temp/10;                               // posle go i zima temp (shto e seuste 123) i samo ja krati vo 12
        }                                               // i taka otposle ide na ciklus, zima 2 od 12 pa kaj cifrata 3 go pomnozuva so 30 i posle se dodava 2 i na kraj go krati tempot

        if(i==EdnaStrana)
        {
            printf("%d\n",i);
        }

    }

    return 0;
}
