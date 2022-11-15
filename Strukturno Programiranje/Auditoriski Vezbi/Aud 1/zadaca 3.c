/*
Да се напише програма која за зададена вредност на х (при декларација на променливата) ќе го пресмета и отпечати на екран х2.
*/

#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    x = x*x;
    printf("%d",x);
    return 0;
}

/*
moze i 

#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    printf("%d",x*x);
    return 0;
}
*/
