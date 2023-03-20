#include <bits/stdc++.h>
using namespace std;

const int m = 1e9+7;

long long f[1000001];

void fill() {
    f[0]=f[1]=1;
    for(int i = 2; i < 1000001; i++) {
        f[i] = (f[i-1] * i)%m;
    }
}

int main() {
	int t;
	cin >> t;
	fill();
	while (t--) {
	    int n;
	    cin>>n;
	    long long sum = 0;
	    while(n--){
	        int a;
	        cin>>a;
	        sum+=f[a];
	    }
	    cout<<sum%m<<endl;
	}
	return 0;
}
