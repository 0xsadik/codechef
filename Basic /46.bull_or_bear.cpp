#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    if (x < y) {
	        cout << "PROFIT\n";
	    }
	    else if (x == y) {
	        cout << "NEUTRAL\n";
	    }
	    else {
	        cout << "LOSS\n";
	    }
	}
	return 0;
}
