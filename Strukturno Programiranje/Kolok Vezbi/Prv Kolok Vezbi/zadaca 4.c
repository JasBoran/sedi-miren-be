/*
Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст се скриени цели броеви (помали од 100).
Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.

For example:
Input: ako34D neka12em bashka41mewr20!
Output: 107
*/

#include <stdio.h>
int main()
{
    char ch;
    int sum = 0, temp = 0;
    while((ch = getchar()) != '!') 
    {
        if(ch >= '0' && ch <= '9')
        {
            temp = (temp*10) + ch - '0';
            //sum = sum + temp;
        }
        else
        {
            sum = sum + temp;
            temp = 0;
        }
    }
    printf("%d", sum+temp);
    return 0;
}
//pak copy