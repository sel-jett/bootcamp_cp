#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t, sum, maxx, minx;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sum = 1, maxx = 1, minx = n;
        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i -1] <= 2 && v[i] - v[i -1] >= -2)
                sum++;
            else
            {
                minx = min(minx, sum);
                maxx = max(maxx, sum);
                sum = 1;
            }
        }
        minx = min(minx, sum);
        maxx = max(maxx, sum);
        cout << minx << " " << maxx << endl;
    }
}

int main() {
    solve();
    return 0;
}