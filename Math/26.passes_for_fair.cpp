#include <iostream>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while(t--) {
	    cin >> n >> k;
	    if (n < k && k >= n) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	}
	return 0;
}
