#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, r;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> r;
	    cout << ceil((x + (r / 30) / y))  << endl;
	    
	}
	return 0;
}
