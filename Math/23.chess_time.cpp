#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    int sum = (n * 60) / 20;
	    cout << sum << endl;
	}
	return 0;
}
