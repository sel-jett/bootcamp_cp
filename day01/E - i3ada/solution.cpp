#include <iostream>
#include <string>
using namespace std;

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int max_len = 1;
    int current_len = 1;

    for (size_t i = 1; i < str.size(); i++) {
        if (str[i] == str[i - 1]) {
            current_len++;
        } else {
            max_len = max(max_len, current_len);
            current_len = 1;
        }
    }
    max_len = max(max_len, current_len);
    cout << max_len << endl;
}

int main() {
    solve();
    return 0;
}
