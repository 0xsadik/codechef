#include <iostream>
using namespace std;

int main() {
	int t, a, b, c, d;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c >> d;
	    int tv1 = a - c;
	    int tv2 = b - d;
	    if (tv1 < tv2) {
	        cout << "First\n";
	    }
	    else if (tv1 == tv2) {
	        cout << "Any\n";
	    }
	    else {
	        cout << "Second\n";
	    }
	}
	return 0;
}
