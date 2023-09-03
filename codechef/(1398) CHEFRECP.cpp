#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

#define el endl
#define fr(i, a) for (int i = 0; i < a; i++)
#define mod 1000000007

void solve() {
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> recipe;
    
    bool chef = true;
    
    fr(i, n) {
        cin >> arr[i];
        recipe[arr[i]]++;
        if(recipe[arr[i]] != 1 && arr[i-1] != arr[i]) {
            chef = false;
        }
    }
    
    int freq[recipe.size()];
    int count = 0;
    for(auto i = recipe.begin(); i != recipe.end(); i++) {
        freq[count] = i -> second;
        count++;
    }
    
    sort(freq, freq + recipe.size());
    
    fr(i, recipe.size()) {
        if(freq[i] == freq[i-1]) {
            chef = false;
            break;
        }
    }
    
    if(chef)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
	    solve();
	}
	return 0;
}
