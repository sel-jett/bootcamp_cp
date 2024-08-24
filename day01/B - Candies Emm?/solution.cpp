#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        sort(a.begin(), a.end(), greater<int>());
        int mihaiCandies = 0, biancaCandies = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                mihaiCandies += a[i];
            } else {
                biancaCandies += a[i];
            }
        }
        if (biancaCandies >= mihaiCandies) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
