#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long LL;

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1];

    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    long long ans = 0;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= i)
            continue;
        ans += (long long)(lower_bound(v.begin(), v.end(), arr[i]) - v.begin());
        v.push_back(i);
    }
    cout << ans << '\n';
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
