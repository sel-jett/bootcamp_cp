#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    vector<long long> prefix(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        prefix[i] = prefix[i - 1] + v[i];
    }

    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        cout << prefix[b] - prefix[a - 1] << endl;
    }
}

int main ( void )
{
    solve();
    return (0);
}