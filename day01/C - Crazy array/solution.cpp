#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long moves = 0;
    int prev, curr;

    cin >> prev;

    for (int i = 1; i < n; ++i) {
        cin >> curr;
        if (curr < prev) {
            moves += prev - curr;
            curr = prev; 
        }
        prev = curr;
    }

    cout << moves << endl;

    return 0;
}
