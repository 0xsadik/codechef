#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = n - 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= s; j++) {
            cout << " ";
        }
        for (int k = 1; k < i * 2; k++) {
            cout << "*";
        }
        s--;
        cout << '\n';
    }
    return 0;
}
