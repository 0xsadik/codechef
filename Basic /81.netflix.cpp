#include <iostream>
using namespace std;

int main() {
	int t, a, b, c, x;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c >> x;
	    if ( a + b >= x || b + c >= x || c + a >= x ) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	}
	return 0;
}
