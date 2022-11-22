/*
Да се напише програма за пресметување и печатење на плоштината и периметарот на круг. 
Радиусот на кругот се чита од стандарден влез (тастатура) како децимален број.
*/

#include <stdio.h>

int main()
{
    float PerimetarNaKrug; //L
    float PlostinaNaKrug; //P
    float PI = 3.14;
    float Radius;

    scanf("%f",&Radius);

    PerimetarNaKrug = 2 * Radius * PI;
    PlostinaNaKrug = Radius * Radius * PI;
    printf("Perimetarot na krugot e: %.2f\n Plostinata na krugot e: %.2f",PerimetarNaKrug,PlostinaNaKrug);
    return 0;
}
