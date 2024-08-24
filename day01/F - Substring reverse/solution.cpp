#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    std::string s;
    int i, j;

    std::cin >> s;
    std::cin >> i >> j;
    i--; 
    j--;
    std::reverse(s.begin() + i, s.begin() + j + 1);
    std::cout << s << std::endl;
}

int main( void )
{
    solve();
    return (0);
}
