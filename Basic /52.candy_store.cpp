#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    if (x >= y) {
	        cout << y * 1 << endl;
	    }
	    else {
	        cout <<(y * 2) - x << endl;
	    }
	}
	return 0;
}
