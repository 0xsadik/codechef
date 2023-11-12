// atcoder.jp/contests/abc235/tasks/abc235_b

#include<stdio.h>
int main()
{
    const int mx = 1e5 + 123;
    int a[mx];
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    int ans = a[1];

    for (int i = 2; i <= n; i++) {
        if (a[i] > a[i - 1]) {
            ans = a[i];
        }
        else {
            break;
        }
    }
    printf("%d", ans);

    return 0;
}