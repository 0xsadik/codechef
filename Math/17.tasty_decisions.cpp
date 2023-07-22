#include <iostream>
using namespace std;

int main() {
	int t, x, y;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    int tastx = 2 * x;
	    int tasty = 5 * y;
	    if (tastx > tasty) {
	        cout << "Chocolate\n";
	    }
	    else if(tastx < tasty) {
	        cout << "Candy\n";
	    }
	    else {
	        cout << "Either\n";
	    }
	}
	return 0;
}
