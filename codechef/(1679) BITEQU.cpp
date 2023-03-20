#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define fr(i, a) for (int i = 0; i < a; i++)
#define mod 1000000007

void solve() {
    unsigned int n;
    cin>>n;
    if(n!=0&&n!=1) {
        (n%2==0) ? (n+=1) : (n-=1);
        cout<<8589934592<<" "<<4294967296<<" "<<1<<" "<<n<<endl;
    } else if (n==0) {
        cout<<10<<" "<<8<<" "<<7<<" "<<15<<endl;
    } else {
        cout<<12<<" "<<3<<" "<<10<<" "<<11<<endl;
    }
}

int main() {
	int t;
	cin >> t;
	while (t--) {
	    solve();
	}
	return 0;
}
