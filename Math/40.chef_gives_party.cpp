#include <iostream>
using namespace std;

int main() {
	int t, n, x, k;
	cin >> t;
	while(t--) {
	    cin >> n >> x >> k;
	    if ((n * x) <= k) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	}
	return 0;
}
