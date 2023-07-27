#include <iostream>
using namespace std;

int main() {
	int t, x, y, p, m;
	cin >> t;
	while(t--) {
	    cin >> x >> y;
	    cout << ((x * 10) / 100) + y << endl;
	}
	return 0;
}
