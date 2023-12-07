// chef and water bottles 

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n, x, k, wn, div;
        cin >> n >> x >> k;
        wn = n * x;
        div = k / x;
        if (wn <= k) {
            cout << n << '\n';
        }
        else {
            cout << div << '\n';
        }
    }
    return 0;
}

// problem link : https://www.codechef.com/problems/CHEFBOTTLE

