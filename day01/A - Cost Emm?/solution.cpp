#include <iostream>
#include <vector>
using namespace std;

void solve()
{
    int t, d;
    cin >> t;
    d = t;
    vector<int> b;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        for (int i = 0; i < n; i++) {
            if (k == a[i])
            {
                b.push_back(1);
                i = n;
            }
            else if (i == (n - 1))
            {
                b.push_back(0);
                break;
            }    
        }
        if (t == 0)
        {
            for (int i = 0; i < d; i++)
            {
                (b[i] == 1) && cout << "YES\n" ;
                (b[i] == 0) && cout << "NO\n" ;
            }
        }
    }

}

int main ( void )
{
    solve();
    return (0);
}