#include <iostream>
using namespace std;

int main() {
	int t, x, h;
	cin >> t;
	while(t--) {
	    cin >> x >> h;
	    if (x >= h) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	}
	return 0;
}
