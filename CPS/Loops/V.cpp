#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int t = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << t << ' ';
            t++;
        }
        cout << "PUM\n";
        t++;
    }
    return 0;
}