#include <iostream>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while(t--) {
	    cin >> a >> b;
	    cout << min(7-a, 7-b) << endl;
	}
	return 0;
}
