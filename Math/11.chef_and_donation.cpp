#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    if (y > x) {
	        cout << (y - x) << "\n";
	    }
	    else {
	        cout << (x - y) << endl;
	    }
	}
	return 0;
}
