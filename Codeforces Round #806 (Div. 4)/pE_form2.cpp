#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void printMatrix(vector<vector<int>> vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        for (int j = 0; j < vec.size(); ++j)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; ++i)
        cin >> s[i];

    vector<vector<int>> g(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            g[i][j] = (s[i][j] - '0');

    int ans = 0;

    for (int i = 0; i < n / 2; ++i)
    {
        for (int j = 0; j < (n + 1) / 2; ++j)
        {
            int cnt = 0;
            cnt += g[i][j];
            cnt += g[j][n - 1 - i];
            cnt += g[n - 1 - i][n - 1 - j];
            cnt += g[n - 1 - j][i];
            ans += min(cnt, 4 - cnt);
        }
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
