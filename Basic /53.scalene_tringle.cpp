#include <iostream>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    if (a == b || b == c || c == a ) {
	        cout << "NO\n";
	    }
	    else {
	        cout << "YES\n";
	    }
	}
	return 0;
}
