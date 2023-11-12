// palindrome 

#include<iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a;

    for (int i = a.size() - 1; i >= 0; i++) {
        b+=a[i];
    }
    int a1, b2;
    a1 = stoi(a);
    b2 = stoi(b);
    cout << b2 << '\n';
    if (a1 == b2) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}