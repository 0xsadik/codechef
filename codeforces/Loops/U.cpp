// some sums 

#include<iostream>
using namespace std;

int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++ ) {
        while(i > 0) {
            sum += i % 10;
            i /= 10;
            if (sum >= a && sum <= b) {
                sum += i;
            }
        }
    }
    cout << sum << '\n';
}