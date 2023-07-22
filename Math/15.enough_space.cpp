#include <iostream>
using namespace std;

int main() {
	int t, n, x, y;
	cin >> t;
	while(t--) {
	    cin >> n >> x >> y;
	    int res = x + (y * 2);
	    if (res <= n) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "NO\n";
	    }
	}
	return 0;
}
