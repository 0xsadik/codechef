#include <iostream>
using namespace std;

int main() {
	int t, x, n;
	cin >> t;
	while(t--) {
	    cin >> x >> n;
	    cout << (x / 10) * n << endl;
	}
	return 0;
}
