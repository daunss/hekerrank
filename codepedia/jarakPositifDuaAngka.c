#include <stdio.h>

int main()
{
    long long apakahIniMyElaina;
    long long kaloSayaMendingElaina;

    if (scanf("%lld %lld", &apakahIniMyElaina, &kaloSayaMendingElaina) == 2)
    {
        long long myPenyihirElaina = apakahIniMyElaina - kaloSayaMendingElaina;
        if (myPenyihirElaina < 0)
        {
            myPenyihirElaina = -myPenyihirElaina;
        }
        printf("%lld\n", myPenyihirElaina);
    }
    //jadi anime terbaik menurut saya elaina sih, sama sory ngetroll dikit mas
    return 0;
}
