#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> M;
    for (auto c : s)
    {
        if (M.count(c))
            M[c]++;
        else
            M[c] = 2;
    }
    int count = 0;
    for (auto e : M)
        count += e.second;
    cout << count << endl;
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
