#include <iostream>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	while(t--) {
	    cin >> x >> y >> z;
	    int has = (x * 5) + (y * 10);
	    cout << has / z << endl;
	}
	return 0;
}
