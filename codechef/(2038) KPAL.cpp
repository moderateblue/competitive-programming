#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long t;
	cin >> t;
	while(t--) {
	    long long n, k;
	    cin >>n>>k;
	    long long a[n];
	    for (long long i = 0; i < n; i++) {
	        long long in;
	        cin >> in;
	        a[i] = in;
	    }
	    long long operations = 0;
	    for (long long i = 0; i < n/2; i++) {
	        operations += abs(a[i] - a[n-1-i]);
	    }
	    if (operations == 0) cout << "YES" << endl;
	    else if (k == n) cout << "NO" << endl;
	    else if (k % 2 == 1) cout << "YES" << endl;
	    else if (k % 2 != n % 2) cout << "YES" << endl;
	    else if (operations % 2 == 0) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
