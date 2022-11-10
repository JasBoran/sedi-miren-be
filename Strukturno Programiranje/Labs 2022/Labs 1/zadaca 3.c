/*
 Да се внесат два четирицифрени броја. Да се испечати сумата на цифрите кои се наоѓаат на позицијата на единците, па на десетките, стотките и илјадарките. 

For example:
Input: 1234
       3419
Output: Edinici: 13
        Desetki: 4
        Stotki: 6
        Iljadarki: 4
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int PrvBroj;
    int Edinici1,Desetki1,Stotki1,Iljadarki1;
    int VtorBroj;
    int Edinici2,Desetki2,Stotki2,Iljadarki2;
    int Edinici,Desetki,Stotki,Iljadarki;
    scanf("%d %d",&PrvBroj,&VtorBroj);
    Edinici1 = PrvBroj%10;
    Desetki1 = (PrvBroj/10)%10;
    Stotki1 =(PrvBroj/100)%10;
    Iljadarki1 = PrvBroj/1000;

    Edinici2 = VtorBroj%10;
    Desetki2 = (VtorBroj/10)%10;
    Stotki2 =(VtorBroj/100)%10;
    Iljadarki2 = VtorBroj/1000;

    Edinici=Edinici1+Edinici2;
    Desetki=Desetki1+Desetki2;
    Stotki=Stotki1+Stotki2;
    Iljadarki=Iljadarki1+Iljadarki2;

    printf("Edinici: %d\nDesetki: %d\nStotki: %d\nIljadarki: %d",Edinici,Desetki,Stotki,Iljadarki);
    return 0;
}
