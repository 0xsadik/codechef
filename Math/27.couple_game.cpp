#include <iostream>
using namespace std;

int main() {
	int t, g, b;
	cin >> t;
	while(t--) {
	    cin >> g >> b;
	    if(g < b ) {
	        cout << b - g << endl;
	    }
	    else {
	        cout << g - b << endl;
	    }
	}
	return 0;
}
