/*
Од стандарден влез се чита број x. 
На екран да се испечати 1 ако бројот x x∈(−100,100)∪[200,300), a 0 во спротивно.
Задачата да се реши со логички операции (без if-else). 

For Example:
Input: - 100 
Output: 0

For Example 2:
Input: 0
Output: 1
*/

#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    x = (x > -100 && x < 100) || (x >= 200 && x < 300);
    printf("%d",x);
    return 0;
}
