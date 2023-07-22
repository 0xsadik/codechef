#include <iostream>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if (x < 300) {
	        cout << (300 * 10) << endl;
	    }
	    else {
	        cout << (x * 10) << endl;
	    }
	}
	return 0;
}
