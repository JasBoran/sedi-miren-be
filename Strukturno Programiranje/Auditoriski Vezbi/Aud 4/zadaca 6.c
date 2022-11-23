/*
Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да се напише програма што ќе провери дали од отсечките
може да се конструира триаголник, при што ако може, да се провери дали истиот е правоаголен и да се пресмета неговата плоштина. 
Во спротивно, треба да се испечатат соодветни пораки.
*/

#include <stdio.h>

int main() {
    float a, b, c;
    printf("Vnesi dolzini na strani: \n");
    scanf("%f %f %f", &a, &b, &c);
  
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        printf("Ne moze da se konstruira triagolnik.\n");
    }
  
    else 
    {
        if (a >= b)
        {
            float tmp = a;
            a = b;
            b = tmp;
        }
        if (a >= c)
        {
            float tmp = a;
            a = c;
            c = tmp;
        }
        if (b >= c)
        {
            float tmp = b;
            b = c;
            c = tmp;
        } // po ova najdolgata strana kje bide vo c
        if (c * c == a * a + b * b) 
        {
            printf("Tragolnikot e pravoagolen.\n");
            printf("Ploshtinata mu e %7.3f\n", a * b / 2);
        } 
        else
        {
            printf("Tragolnikot NE e pravoagolen.\n");
        }
    }
    return 0;
} 

//Ovaa zad ja kopirav od aud
