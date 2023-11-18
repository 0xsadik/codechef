
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[123];
    cin >> s;
    for (int i = 0, j = 5; i < j; i++, j--) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
    for (int i = 0; i < 6; i++ ) {
        cout << s[i] << ' ';
    }
    return 0;
}