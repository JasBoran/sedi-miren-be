/*
Да се напише програма за пресметување на y=x(n) за даден природен број n, n >= 1 и реален број x. (провери ауд 5 за формулата)
*/

#include <stdio.h>

int main() {
    int x,y,n;
    y=1; //mora poso kaj y=y*x, kje dava samo 0
    printf("X: ");
    scanf("%d",&x);
    printf("N: ");
    scanf("%d",&n);

    int brojac = 0;
    while (brojac<n)
    {
        y=y*x;
        brojac++;
    }
  
    printf(" %d\n", y);
    return 0;
}
