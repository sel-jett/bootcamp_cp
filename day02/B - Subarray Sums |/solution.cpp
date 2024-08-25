#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int n, x;
    long long current_sum = 0, sub_array = 0;
    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    std::unordered_map<long long, int> order;
    order[0] = 1;

    for (int i = 0; i < n; i++)
    {
        current_sum += v[i];
        if (order.find(current_sum - x) != order.end())
        {
            sub_array += order[current_sum - x];
        }
        order[current_sum]++;
    }
    cout << sub_array << endl;
}

int main() {
    solve();
    return 0;
}
