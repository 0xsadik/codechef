#include <iostream>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    int res = max(b, c) - min(a, b);
	    cout << res << endl;
	}
	return 0;
}
