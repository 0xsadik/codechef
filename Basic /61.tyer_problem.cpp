#include <iostream>
using namespace std;

int main() {
	int t, n, m, bike, car;
	cin >> t;
	while(t--) {
	    cin >> n >> m;
	    bike = n * 2;
	    car = m * 4;
	    cout << bike + car << endl;
	}
	return 0;
}
