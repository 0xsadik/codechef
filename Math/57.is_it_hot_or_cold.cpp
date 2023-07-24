#include <iostream>
using namespace std;

int main() {
	int t, c;
	cin >> t;
	while(t--) {
	    cin >> c;
	    if (c > 20) {
	        cout << "HOT\n";
	    }
	    else {
	        cout << "COLD\n";
	    }
	}
	return 0;
}
