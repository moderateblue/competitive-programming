#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin>>n;
	    if(n==2) cout<<-1<<endl;
	    else if(n>3){
	        for(int a = n-1; a>=0;a--){
	            if(a==0){
	                for(int i = 0; i < n; i++) {
	                    cout<<1;
	                }
	            } 
	            else if (a==n-2) {
	                for(int i = 0; i < n; i++) {
	                    if (i==0) cout<<1;
	                    else if (i==n-1) cout<<1;
	                    else cout<<0;
	                }
	            }
	            else {
	                int ones = n-a-1;
	                for(int i = 0; i < ones; i++) {
	                    cout<<1;
	                }
	                for(int i = 0; i < n-ones;i++) {
	                    cout<<0;
	                }
	            }
	            cout<<endl;
	        }
	    } else {
	        cout<<"010"<<endl<<"100"<<endl<<"111"<<endl;
	    }
	}
	return 0;
}
