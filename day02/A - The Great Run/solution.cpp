#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t, sum, all_girls;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sum = 0;
        for (int i = 0; i < k; i++) {
            sum += v[i];
        }
        all_girls = sum;
        for (int i = k; i < n; i++) {
            sum += v[i] - v[i - k];
            all_girls = max(all_girls, sum);
        }

        cout << all_girls << endl;
    }
}

int main() {
    solve();
    return 0;
}
