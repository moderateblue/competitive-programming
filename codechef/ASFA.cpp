#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin>>n;
	    int ones = 0;
	    int zeros = 0;
	    for(int i = 0; i < n; i++) {
	        int a;
	        cin>>a;
	        if(a==0) zeros++;
	        else ones++;
	    }
	    if((ones+zeros)%2==0&&ones>0&&(n!=2||(ones!=n&&zeros!=n))) {
	        if(ones==zeros) cout<<0<<endl;
	        else if(ones>zeros) {
    	        if(((n/2)%2==1&&zeros%2==1)||((n/2)%2==0&&zeros%2==0)) {
    	            cout<<(ones-zeros)/4<<endl;
    	        } else {
    	            ones++;
    	            zeros--;
    	            cout<<1+(ones-zeros)/4<<endl;
    	        }
	        }
	        else {
	            cout<<(zeros-ones)/2<<endl;
	        }
	    } else {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
