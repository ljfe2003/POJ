#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, n, day, year, ct;
    char a[19][8]={"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
    char b[20][9]={"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
    char mn[8];
    int c[200][3];

    scanf("%d", &n);
    for(j=0;j<n;j++)
    {
        scanf("%d. %s %d", &day, mn, &year);
        for(i=0;i<19;i++)
        {
            if (strcmp(a[i], mn) ==0) {
                ct = year*365+i*20+day+1;
                c[j][0] = ct%260%13;
                c[j][1] = ct%260%20-1;
                c[j][2] = ct/260;
                if (ct%260 == 0 ) {
                    c[j][2] -=1;
                    c[j][1] =19;
                    c[j][0] =13;
                }
                break;
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
