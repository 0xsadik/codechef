#include <iostream>
using namespace std;

int main() {
	int t, a, b, c;
	cin >> t;
	while(t--) {
	    cin >> a >> b >> c;
	    int total = a + b + c;
	    if(total >= 100 && a >= 10 && b >= 10 && c >= 10) {
	        cout << "PASS\n";
	    }
	    else {
	        cout << "FAIL\n";
	    }
	}
	return 0;
}
