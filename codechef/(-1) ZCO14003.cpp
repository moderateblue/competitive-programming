#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	long long arr[n];
	long long max = 1;
	for (long long i = 0; i < n; i++) {
	    cin>>arr[i];
	}
    
	sort(arr, arr + n);
    
	for (long long i = 0; i < n; i++) {
	    arr[i] *= n-i;
	    if (arr[i] > max) max = arr[i];
	}
	cout << max<<endl;
	return 0;
}
