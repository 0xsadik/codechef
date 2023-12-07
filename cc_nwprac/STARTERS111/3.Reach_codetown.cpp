#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

bool canReachCodeTown(const string &s)
{
    return (!isVowel(s[0]) && isVowel(s[1]) && !isVowel(s[2]) && isVowel(s[3]) &&
            !isVowel(s[4]) && isVowel(s[5]) && !isVowel(s[6]) && !isVowel(s[7]));
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string result = canReachCodeTown(s) ? "YES" : "NO";
        cout << result << "\n";
    }

    return 0;
}