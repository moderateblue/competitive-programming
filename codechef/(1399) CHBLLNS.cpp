#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long r, g, b, k;
	    cin >> r >> g >> b >> k;
	    if(k==1) cout << 1 << endl;
	    else{
	        long sum;
	        long arr[3];
	        arr[0] = r;
	        arr[1] = g;
	        arr[2] = b;
	        sort(arr, arr+3);
	        if (k <= arr[0]) cout << k * 3 - 2 << endl;
	        else if (k > arr[0] && k <= arr[1]) cout << (arr[0] * 3) + ((k-arr[0]) * 2 - 1) << endl;
	        else cout << (arr[0] * 3) + ((arr[1]-arr[0]) * 2) + (k-arr[1]) << endl;
	    }
	}
	return 0;
}
