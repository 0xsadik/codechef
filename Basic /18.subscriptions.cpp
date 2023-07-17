#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	double n, x;
	cin >> t;
	
	while(t--) {
	    cin >> n >> x;
	    cout << ceil(n / 6) * x << endl;
	}
	return 0;
}