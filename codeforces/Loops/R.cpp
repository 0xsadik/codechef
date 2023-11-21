// sequence of numbers and sum 

#include<iostream>
using namespace std;

int main()
{
    while (true) {
        int n, m, sum = 0;
        cin >> n >> m;

        if (n > m) {
            for (int i = m; i <= n; i++) {
                cout << i << ' ';
                sum += i;
            }
        }
        else if (n < m)(
            for (int i = n; i <= m; i++) {
                
            }
        )
        else {
            break;
        }
        cout << "sum =" << sum << '\n';
    }
}