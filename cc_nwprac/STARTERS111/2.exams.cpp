#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    int x, y, z, ts, dv;
	    cin >> x >> y >> z;
	    
	    ts = x * y;
	    dv = ts / 2;
	    
	    (z > dv) ? cout << "YES\n" : cout << "NO\n";
	    
	}
	return 0;
}
