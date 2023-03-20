#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, a, b;
	    cin>>n>>a>>b;
	    if (a==b || b%a == 0) {
	        int x;
	        for(int i = 0; i < n; i++) {
	            cin>>x;
	        }
	        cout<<"BOB"<<endl;
	    } else {
    	    int arr[n];
    	    int bob = 0, alice=0;
    	    int shared = 0;
    	    for(int i = 0; i < n; i++) {
    	        cin>>arr[i];
    	        if (arr[i] % a == 0) bob++;
    	        if (arr[i] % b == 0) alice++;
    	        if (arr[i] % a == 0 && arr[i] % b == 0) alice--;
    	    }
    	    if (bob > alice) cout<<"BOB"<<endl;
    	    else cout<<"ALICE"<<endl;
	    }
	}
	return 0;
}
