#include <iostream>
using namespace std;

int main() {
	int t, x;
	cin >> t;
	while(t--) {
	    cin >> x;
	    if (x < 3) {
	        cout << "LIGHT\n";
	    }
	    else if (x >= 7) {
	        cout << "HEAVY\n";
	    }
	    else {
	        cout << "MODERATE\n";
	    }
	    
	}
	return 0;
}
