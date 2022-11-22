/*
Да се напише програма која за дадени страни на еден разностран триаголник ќе ги отпечати на екран периметарот и квадратот од плоштината 
(нека се работи со a = 5, b = 7.5, c = 10.2).
*/

#include <stdio.h>

int main()
{
    float a=5.0, b=7.5, c=10.2;
    float Perimetar; // L
    float Plostina; // P

    Perimetar = a + b + c;

    float s;
    s = Perimetar/2;
    Plostina = s * (s - a) * (s - b) * (s - c);

    printf("Perimetar e: %.2f\n i Plostina e: %.2f",Perimetar,Plostina); //%.2f e za da se zaokruzi na 2 decimali
    return 0;
}
