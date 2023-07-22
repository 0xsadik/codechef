#include <iostream>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    cout << (x * 4) + (y * 2) + (z * 0) << endl;
	}
	return 0;
}
