#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

#define el endl
#define fr(i, a) for (int i = 0; i < a; i++)
#define mod 1000000007

void solve() {
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    ll downy = (n - x) * m;
    ll upy = (x - 1) * m;
    ll rightx = (m - y) * n;
    ll leftx = (y - 1) * n;
    ll tot = max({downy, upy, rightx, leftx});
    cout << tot << el;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
	    solve();
	}
	return 0;
}
