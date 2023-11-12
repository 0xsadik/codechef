
#include<stdio.h>

const int mx = 1e5+123;
int a[mx];
int cnt[1000123];

int main()
{
    int t;
    scanf("%d", &t);
    for(int tc = 1; tc <= t; tc++) {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)  {
            scanf("%d", &a[i]);
        }
        for (int i = 1; i <= n; i++) {
            cnt[a[i]]++;
        }
        int q;
        scanf("%d", &q);
        printf("Case %d:\n", tc);
        while(t--) {
            int p;
            scanf("%d", &p);
            printf("%d\n", cnt[p]);
        }
    }
}