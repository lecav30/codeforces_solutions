#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // right
    ll right[n];
    right[0] = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        right[i + 1] = max(0, arr[i] - arr[i + 1]) + right[i];
        // cout << right[i + 1] << endl;
    }

    reverse(arr, arr + n);
    ll left[n];
    left[0] = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        left[i + 1] = max(0, arr[i] - arr[i + 1]) + left[i];
        // cout << left[i + 1] << endl;
    }

    for (int i = 0; i < m; ++i)
    {
        ll ans;
        int s, t;
        cin >> s >> t;

        if (s <= t)
            ans = right[t - 1] - right[s - 1];
        else
        {
            ans = (left[n - t] - left[n - s]);
        }
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tn;
    // nin >> tn;
    // while (tn--)
    solve();
    return 0;
}
