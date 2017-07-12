#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, n, day, year, ct;
    char a[20][6]={"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu"};
    char b[20][8]={"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
    char mn[6];
    int c[50][3]={{0,0,0}};

    scanf("%d", &n);
    for(j=0;j<n;j++)
    {
        scanf("%d. %s %d", &day, mn, &year);
        for(i=0;i<20;i++)
        {
            if (strcmp(a[i], mn) ==0) {
                ct = year*365+i*20+day;
                c[j][0] = ct%260%13+1;
                c[j][1] = ct%260%20;
                c[j][2] = ct/260;
            }
        }
    }

    printf("%d\n", n);
    for(j=0;j<n;j++)
    {
        printf("%d %s %d\n",c[j][0], b[c[j][1]], c[j][2]);
    }
    return 0;
}
