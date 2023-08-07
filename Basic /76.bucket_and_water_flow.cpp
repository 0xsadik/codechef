#include <iostream>
using namespace std;

int main() {
	int t, w, x, y, z; 
	cin >> t;
	while(t--) {
	    cin >> w >> x >> y >> z;
	    int sum = (y * z ) + w;
	    if (sum > x) {
	        cout << "overflow\n";
	    }
	    else if (sum == x) {
	        cout << "filled\n";
	    }
	    else {
	        cout << "unfilled\n";
	    }
	}
	return 0;
}
