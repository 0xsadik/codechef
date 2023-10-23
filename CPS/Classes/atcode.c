// solution of takashi 

#include<stdio.h>

int main()
{
    long long t, a, k;
    scanf("%lld %lld %lld", &t, &a, &k);
    
    if (t + a <= k) {
        printf("0 0\n");
    }
    else if (t >= k) {
        printf("%lld %lld\n", t - k, a);
    }
    else {
        printf("0 %lld\n", a - (k - t));
    }

    return 0;
}