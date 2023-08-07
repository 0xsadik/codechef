#include <iostream>
using namespace std;

int main() {
	int t, r1, r2, r3; cin >> t;
	while(t--) {
	    cin >> r1 >> r2 >> r3;
	    if (r1 > (r2 + r3) || r2 > (r1 + r3) || r3 > (r1 + r2)) {
	        cout << "Yes\n";
	    }
	    else {
	        cout << "No\n";
	    }
	}
	return 0;
}

// https://www.codechef.com/problems/MONOPOLY?tab=statement

