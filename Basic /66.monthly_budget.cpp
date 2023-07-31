#include <iostream>
using namespace std;

int main() {
	int t, x, y, sum; cin >> t;
	while(t--) {
	    cin >> x >> y;
	    sum = y * 30;
	    if (x >= sum) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	}
	return 0;
}
