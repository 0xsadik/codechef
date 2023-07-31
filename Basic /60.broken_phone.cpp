#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    if (x < y) {
	        cout << "REPAIR\n";
	    }
	    else if (x == y) {
	        cout << "ANY\n";
	    }
	    else {
	        cout << "NEW PHONE\n";
	    }
	}
	return 0;
}
