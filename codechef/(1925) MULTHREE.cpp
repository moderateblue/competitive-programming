#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k, d0, d1;
        cin >> k >> d0 >> d1;
        long long sum = d0 + d1;
        
        for (int i = 0; i <= (k-3) % 12; i++) sum += sum % 10;
        
        if (sum % 3 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        //cout << sum << endl;
    }
    return 0;
}
