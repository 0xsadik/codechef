/*
    learning function
    YT: codeHelp - by Babbar
    https://www.youtube.com/watch?v=8nNqk2NPbRA&ab_channel=CodeHelp-byBabbar
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    // pow(a, b);

    int a, b;
    cin >> a >> b;

    int ans = 1;
    for (int i = 1; i <= b; i++) {
        ans *= a;
    }
    cout << ans << '\n';

    return 0;
}