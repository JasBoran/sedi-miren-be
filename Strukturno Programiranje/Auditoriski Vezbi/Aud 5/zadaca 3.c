/*
Да се напише програма што од n броеви (внесени од тастатура) ќе го определи бројот на броеви што се деливи со 3,
при делењето со 3 имаат остаток 1, односно 2.
*/

#include <stdio.h>

int main() {
    int n;
    int broj;
    printf("Vnesi kolku pati kje vneses broevi:");
    scanf("%d",&n);

    int brojac=0;
    int NeEDelivSo3Voopsto=0;
    int DelivSo3SoOstatok1Brojac=0;
    int DelivSo3SoOstatok2Brojac=0;

    while(brojac<n)
    {
        scanf("%d",&broj);
        brojac++;

        if(broj%3==1)
        {
            DelivSo3SoOstatok1Brojac++;
        }

        else if(broj%3==0)
        {
            DelivSo3SoOstatok2Brojac++;
        }

        else
        {
            NeEDelivSo3Voopsto++;
        }

    }
    printf("Delivi so 3 i so ostatok 1: %d\n",DelivSo3SoOstatok1Brojac);
    printf("Delivi so 3 i so ostatok 2: %d\n",DelivSo3SoOstatok2Brojac);
    printf("Ne se delivi so 3: %d",NeEDelivSo3Voopsto);
    return 0;
}
