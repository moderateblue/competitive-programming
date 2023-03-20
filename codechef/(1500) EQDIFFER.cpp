#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
        int freq[n];
        int max = 2;
	    for (int i = 0; i < n; i++) {
	        cin >> freq[i];
	    }
	    if (n == 1 || n == 2) {
	        cout << 0 << endl;
	        continue;
	    }
	    sort(freq, freq+n);
	    int streak = 1;
	    for (int i = 1; i < n; i++) {
	        if (freq[i] == freq[i-1]) {
	            streak++;
	            if (streak > max) max = streak;
	        } else {
	            streak = 1;
	        }
	    }
	    cout << n - max << endl;
	}
	return 0;
}
