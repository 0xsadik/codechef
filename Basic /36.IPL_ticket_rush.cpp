#include <iostream>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	while(t--) {
	    cin >> n >> m;
	    if (n > m) {
	        cout << n - m << endl;
	    }
	    else {
	        cout << 0 << endl;
	    }
	}
	return 0;
}
