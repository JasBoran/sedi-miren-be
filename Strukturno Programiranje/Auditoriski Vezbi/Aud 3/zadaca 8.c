/*
Да се напише програма каде од тастатура ќе се внесе датумот на раѓање во формат (ddmmgggg). 
Програмата на компјутерскиот екран ќе го испечати денот и месецот на раѓање.

Пример:
Ако се внесе следниот број 18091992, програмата ќе испечати: 18.09

(Искористете целобројно делење и остаток од делење.)
*/

#include <stdio.h>

int main()
{
    int DDMMGGGG;
    printf("Vnesi datum na ragjanje vo format ddmmgggg: ");
    scanf("%d",&DDMMGGGG);

    int DD = DDMMGGGG / 1000000;
    int MM = (DDMMGGGG / 10000) % 100;

    printf("%d . %d",DD,MM);
    return 0;
}
