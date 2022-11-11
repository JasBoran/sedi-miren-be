/*
За дадени освоени поени пишете ја оценката која го следи студентот според дадените табели.

  0-50 = 5
  51-60 = 6
  61-70 = 7
  71-80 = 8
  81-90 = 9
  91-100 = 10

Покрај оценките да се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:

  1 - 3 = "-"
  4 - 7 = " "
  8-0 = "+"

For example: 
Input: 101
Output: Nevalidna vrednost za poeni!
*/

#include <stdio.h>

int main() {
    int Ocena;
    scanf("%d",&Ocena);
    int PoslednataBrojkaNaOcenata = Ocena % 10;
    if (Ocena > 0 && Ocena < 100)
    {
        if (Ocena>= 0 && Ocena <= 50)
        {
            printf("Ocenka 5");
        }

        if (Ocena>= 51 && Ocena <= 60)
        {
            printf("Ocenka 6");
        }

        if (Ocena>= 61 && Ocena <= 70)
        {
            printf("Ocenka 7");
        }

        if (Ocena>= 71 && Ocena <= 80)
        {
            printf("Ocenka 8");
        }

        if (Ocena>= 81 && Ocena <= 90)
        {
            printf("Ocenka 9");
        }

        if (Ocena>= 91 && Ocena <= 100)
        {
            printf("Ocenka 10");
        }

        if (PoslednataBrojkaNaOcenata >= 1 && PoslednataBrojkaNaOcenata <= 3)
        {
            printf("-");
        }

        if (PoslednataBrojkaNaOcenata >= 4 && PoslednataBrojkaNaOcenata <= 7)
        {
            printf(" ");
        }

        if (PoslednataBrojkaNaOcenata >= 8 && PoslednataBrojkaNaOcenata <= 10)
        {
            printf("+");
        }
        
    }
    else
    {
        printf("Nevalidna vrednost za poeni!");
    }
    return 0;
}
