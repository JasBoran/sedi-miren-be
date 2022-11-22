/*
Да се напише програма која чита голема буква од стандарден влез и ја печати истата како мала буква.
Секој знак се претставува со ASCII број. 
*/

#include <stdio.h>

int main()
{
    char c;
    printf("Vnesi golema bukva:");
    scanf("%c",&c);
    printf("Malata bukva e: %c",c + 32);
    return 0;
}

/*
" c + ('a' - 'A') " e formulata za samo od golema kon mala, no moze i 
" c + 32 " bidejki ASCII brojot na A=97 i a=65
*/
