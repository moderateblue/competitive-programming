#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

#define el endl
#define fr(i, a) for (int i = 0; i < a; i++)
#define mod 1000000007

void solve() {
    int n;
    cin>>n;
    int half;
    if(n%2==0) half = (n*n)/2 + 1;
    else half = (n*n)/2 + 2;
    int firsthalf = 1;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            if((i*n+j)%2==0){
                cout<<firsthalf<<" ";
                firsthalf++;
            }
            else {
                cout<<half<<" ";
                half++;
            }
            //cout<<n<<"n "<<half<<"half "<<firsthalf<<"firsthalf "<<endl;
        }
        cout<<el;
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
