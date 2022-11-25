/*
Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). Во зададен опсег 
(почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура), 
да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.

For Example:
Input: 99 500
Output: 200
*/

#include <stdio.h>
int main(){

    int m,n;
    int temp,broj;
    scanf("%d %d",&m,&n); // m - pocetok  n - kraj

    while(m<=n)
    {
       temp = m;
       broj = temp; //cuva vrednost

       while(temp!=0) //22
       {
           if((temp%10)%2==0) //ja krati do kraj
           {
               temp = temp / 10;
           }
           else
           {
               break;
           }
       }
       if (temp==0) //ako iskoci krajnoto 0 togash print brojot, zatoa broj = temp
       {
           printf("%d\n",broj);
           break;
       }
       m++;
    }

    if(m>n)
    {
        printf("NE");
    }

    return 0;
}
