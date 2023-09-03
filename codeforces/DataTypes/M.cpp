#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x; cin >> x;
    if (x >= 'A' && x <= 'Z') {
        cout << "ALPHA\nIS CAPITAL\n";
    }
    else if (x >= '0' && x <= '9') {
        cout << "IS DIGIT\n";
    }
    else {
        cout << "ALPHA\nIS SMALL\n";
    }
}