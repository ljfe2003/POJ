#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ct=0,a,b,c,d,day;

    while(scanf("%d %d %d %d", &a, &b, &c, &d)==4)
    {
        if (a==-1) break;
        a = a % 23;
        b = b % 28;
        c = c % 33;
        day = d+33-(d-c)%33;
        ct += 1;
        while((day % 28 != b) || (day % 23 != a))
        {
            day += 33;
        }
        if ((day-d) <= 0) day+= 21252;
        if ((day-d) >21252) day-= 21252;
        printf("Case %d: the next triple peak occurs in %d days.\n", ct, day-d);
    }

    return 0;
}
