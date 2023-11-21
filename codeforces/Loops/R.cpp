// sequence of numbers and sum 

#include<iostream>
using namespace std;

int main()
{
    int n, m, sum = 0;
    cin >> n >> m;

    if (n > m) {
        for (int i = m; i <= n; i++) {
            cout << i << ' ';
            sum += i;
        }
    }
    cout << "sum =" << sum << '\n';
}