#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    long long x, y;
	    cin >> x >> y;
	    if (x > y + 1) cout << "CHEF" << endl;
	    else if (y > x + 1) cout << "CHEFINA" << endl;
	    else if (x==y) {
	        if (x%2==0) cout << "CHEFINA" << endl;
	        else cout << "CHEF" << endl;
	    }
	    else {
	        long long smallest = min(x, y);
	        if (smallest % 2 == 0) cout << "CHEFINA" << endl;
	        else cout << "CHEF" << endl;
	    }
	}
	return 0;
}
