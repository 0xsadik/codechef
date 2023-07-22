#include <iostream>
using namespace std;

int main() {
	int t, x, k;
	cin >> t;
	while(t--) {
	    cin >> x >> k;
	    cout << (x * 7) - k << endl;
	}
	return 0;
}