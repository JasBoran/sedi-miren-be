/*
Да се напише програма која ќе ја пресметува вредноста на математичкиот израз: x = 3/2 + (5 – 46*5/12)
*/

#include <stdio.h>

int main() {
    float x;
    x = 3/2.0 + (5 – 46*5/12.0);
    printf("%f",x);
    return 0;
}

// kaj x dodavam 2.0 i 12.0 bidejki sekogash koga delime so float mora da stoi od bilo koja strana bar edna brojka so .0 (mozev i 5.0 ili 3.0)
